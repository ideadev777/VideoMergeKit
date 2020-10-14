#include "mainwindow.h"
#include <QFileDialog>
#include <QUrl>
#include <QTimerEvent>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags)
{
	ui.setupUi(this) ;
	initUI() ;
	initConenction() ;

	m_curVideo = NULL ;
	m_isRemoteSet = false ;
	setEditable(false) ;
	m_isPlaying = false ;
	m_audioTrack = new QMediaPlayer(this) ;
	connect( m_audioTrack, SIGNAL(stateChanged(QMediaPlayer::State)),
		this, SLOT(onAudioStateChanged(QMediaPlayer::State))) ;
	connect( m_audioTrack, SIGNAL(seekableChanged(bool)),
		this, SLOT(onSeekableChanged(bool))) ;
	connect( m_audioTrack, SIGNAL(positionChanged(qint64)),
		this, SLOT(onVideoPostionChanged(qint64))) ;
	ui.lbl_screen->setVideoWidgetVisible(false) ;
	ui.lbl_main_seek->setEditable(true) ;
	m_progressDlg = new CxProgressDlg(this) ;
	m_progressDlg->hide() ;
} 

void MainWindow::initUI()
{
	m_resLW = ui.lw_video ;
	setFixedSize(895,700) ;
	ui.lbl_main_seek->setCurSeekVisible(true) ;
}

void MainWindow::initConenction()
{
	connect( ui.tb_upload, SIGNAL(clicked()), this, SLOT(onUpload())) ;
	connect( ui.tb_upload_menu, SIGNAL(clicked()), this, SLOT(onUpload())) ;
	connect( ui.tb_merge, SIGNAL(clicked()), this, SLOT(onMerge())) ;
	connect( ui.tb_play, SIGNAL(clicked()), this, SLOT(onPlayButton())) ;
	connect( ui.w_upload, SIGNAL(__uploadVideo(QString)), this, SLOT(uploadVideo(QString))) ;
	connect( m_resLW, SIGNAL(__videoSelectionChanged(CxVideoItem*)), this, SLOT(onVideoSelectionChanged(CxVideoItem*))) ;
	connect( ui.te_start, SIGNAL(timeChanged(QTime)), this, SLOT(onStartTimeChanged(QTime))) ;
	connect( ui.te_end, SIGNAL(timeChanged(QTime)), this, SLOT(onEndTimeChanged(QTime))) ;
	connect( ui.lbl_main_seek, SIGNAL(__rangeChanged(int,int,int)), this, SLOT(onVideoRangeChanged(int,int,int))) ;
	connect( ui.lbl_main_seek, SIGNAL(__preview(int,int)), this, SLOT(onPreview(int,int))) ;
	connect( ui.lbl_main_seek, SIGNAL(__curSeekPosChanged(int,int)), this, SLOT(onSeekClick(int,int))) ;
	connect( m_resLW, SIGNAL(__curSeekPosChanged(int,int)), this, SLOT(onSeekClick(int,int))) ;
	connect( m_resLW, SIGNAL(__rangeChanged(int,int,int)), this, SLOT(onVideoRangeChanged(int,int,int))) ;
	connect( ui.lbl_screen, SIGNAL(__clicked()), this, SLOT(onViewClick())) ;
}

void MainWindow::onUpload()
{
//	uploadVideo("D://1.wmv") ;
//	uploadVideo("D://1.mp4") ;
//	return ;
	QString fileName = QFileDialog::getOpenFileName(this, tr("Upload Mp4 File"),"",tr("Mp4 files (*.mp4 *.avi *.wmv)"));
	if( fileName.length() == 0 ) return ;
	uploadVideo(fileName) ;
}

void MainWindow::uploadVideo(QString fileName)
{
	QFile file(fileName) ;
	if( !file.exists() ) return ;
	if( !isValidSuffix(fileName) )
	{
		QMessageBox::information(NULL,"Error", "Invalid file format.") ;
		return ;
	}
	ui.lw_video->addVideo(fileName) ;
}

//"[v1][a1][v2][a2]" -r 29.7 out.mp4
void MainWindow::onMerge()
{
	stopPlaying() ;
	QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),"",tr("Mp4 files (*.mp4)"));
	if( !fileName.length() ) return ;
	int cnt = m_resLW->count() ;
	QStringList arg ;
	QString videoFilter, audioFilter ;
	int tot = 0 ;
	for( int i = 0; i < cnt; i++ )
	{
		videoInfo var = m_resLW->itemInfoAt(i) ;
		arg << "-i" << var.fileName ;
		int s = var.startTime/1000 ;
		int e = var.endTime/1000 ;
		tot += e-s ;
		videoFilter.append(QString("[%1:v]trim=%2:%3,setpts=PTS-STARTPTS,scale=1600:900:force_original_aspect_ratio=decrease,pad=1600:900:(ow-iw)/2:(oh-ih)/2[v%4];").arg(i).arg(s).arg(e).arg(i)) ;
		audioFilter.append(QString("[%1:a]atrim=%2:%3,asetpts=PTS-STARTPTS[a%4];").arg(i).arg(s).arg(e).arg(i)) ;
	}
	for( int i = 0; i < cnt; i++ ) audioFilter.append(QString("[v%1][a%2]").arg(i).arg(i)) ;
	audioFilter.append(QString("concat=n=%1:v=1:a=1").arg(cnt)) ;
	arg << "-filter_complex" ;
	arg << videoFilter+audioFilter ;
	arg << "-r" << "29.7" << "-y" << fileName ;
	m_progressDlg->startProgress(arg,tot*1000,"Rendering...") ;
	QMessageBox::information(NULL,"","Success!") ;
//	QProcess::execute("ffmpeg",arg) ;
}

void MainWindow::onViewClick()
{
	if( !m_curVideo || !m_resLW->count() ) return ;
	ui.tb_play->click() ;
}

void MainWindow::onPlayButton()
{
	if( m_isPlaying )
	{
		stopPlaying() ;
	}
	else{
		m_isPlaying = true ;
		play(m_resLW->currentRow()) ;
//		play(0) ;
	}
}

void MainWindow::stopPlaying()
{
//	ui.lbl_main_seek->setCurSeekVisible(false) ;
	m_timer.stop() ;
	ui.lbl_screen->setVideoWidgetVisible(false) ;
	m_isPlaying = false ;
	m_audioTrack->stop() ;
	if( ui.tb_play->isChecked() ) ui.tb_play->setChecked(false) ;
}

void MainWindow::play( int id )
{
	m_isSeeked = false ;
	m_timer.start(100,this) ;
	m_resLW->setCurrentRow(id) ;
	m_curPlayID = id ;
	m_audioTrack->setMedia(QUrl::fromLocalFile(m_curVideo->info().fileName));
	m_audioTrack->play() ;
	m_audioTrack->setVolume(0) ;
	m_audioTrack->setVideoOutput(ui.lbl_screen->myVideoWidget()) ;
//	m_audioTrack->setPosition(10000) ;
}

void MainWindow::onVideoSelectionChanged(CxVideoItem* item)
{
	m_curVideo = item ;
	stopPlaying() ;
	setEditable(item?true:false) ;
	if( m_curVideo )
	{
		m_isRemoteSet = true ;

		videoInfo info = m_curVideo->info() ;
		ui.lbl_main_seek->setVideoInfo(info) ;
		QTime st = getTime(info.startTime) ;
		QTime en = getTime(info.endTime) ;
		ui.te_start->setMinimumTime(QTime(0,0,0)) ;
		ui.te_start->setMaximumTime(en) ;
		ui.te_end->setMinimumTime(st) ;
		ui.te_end->setMaximumTime(getTime(info.duration)) ;
		ui.te_start->setTime(st) ;
		ui.te_end->setTime(en) ;
		ui.lbl_main_seek->remoteSetSegment(info.startTime,info.endTime) ;
		ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(info.startTime+100)) ;
		m_isRemoteSet = false ;
		play(m_resLW->row(item)) ;
	}
	else{
		ui.lbl_screen->setMyImage(QImage()) ;
	}
}

void MainWindow::setEditable( bool on )
{
	ui.te_end->setEnabled(on) ;
	ui.tb_play->setEnabled(on) ;
	ui.te_start->setEnabled(on) ;
	ui.lbl_main_seek->setEnabled(on) ;
}

void MainWindow::onStartTimeChanged(QTime t)
{
	if( m_isRemoteSet ) return ;
	ui.te_end->setMinimumTime(t) ;
	ui.lbl_main_seek->remoteSetSegment(getMSec(t),-1,true) ;
	ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(getMSec(t))) ;
}

void MainWindow::onEndTimeChanged(QTime t)
{
	if( m_isRemoteSet ) return ;
	ui.te_start->setMaximumTime(t) ;
	ui.lbl_main_seek->remoteSetSegment(-1,getMSec(t),true) ;
	ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(getMSec(t))) ;
}

void MainWindow::onVideoRangeChanged( int r, int st, int en )
{
	ui.te_start->setTime(getTime(st)) ;
	ui.te_end->setTime(getTime(en)) ;
	if( r == -1 )
	{
		if( !m_curVideo ) return ;
		m_curVideo->trimBar()->remoteSetSegment(st,en) ;
	}
	else
	{
		ui.lbl_main_seek->remoteSetSegment(st,en) ;
	}
}

void MainWindow::onAudioStateChanged(QMediaPlayer::State state)
{

}

void MainWindow::onSeekableChanged( bool on )
{
	return ;
}

void MainWindow::timerEvent(QTimerEvent *event)
{
	if( event->timerId() != m_timer.timerId() ) return ;
	if( !m_isPlaying ) return ;
	if( !m_isSeeked )
	{
		if( !m_audioTrack->isSeekable() ) return ;
		m_audioTrack->setPosition(m_curVideo->info().startTime) ;
		m_startTime = QTime::currentTime() ;
		m_audioTrack->setVolume(100) ;
		m_isSeeked = true ;
//		ui.lbl_main_seek->setCurSeekVisible(true) ;
		ui.lbl_main_seek->remoteSeek(m_curVideo->info().startTime) ;
		m_curVideo->trimBar()->remoteSeek(m_curVideo->info().startTime) ;
		ui.lbl_screen->setVideoWidgetVisible(true) ;
	}
	else
	{
		qint64 past = m_startTime.msecsTo(QTime::currentTime()) ;
		past += m_curVideo->info().startTime ;
		ui.lbl_main_seek->remoteSeek(past) ;
		m_curVideo->trimBar()->remoteSeek(past) ;
		if( past >= m_curVideo->info().endTime )
		{
			m_timer.stop() ;
			stopPlaying() ;
			return ;
		}
//		ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(past)) ;
// 		ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(m_audioTrack->position())) ;
	}
}

void MainWindow::onVideoPostionChanged( qint64 pos )
{
	return ;
	setWindowTitle(QString("%1").arg(pos)) ;
	ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(pos)) ;
}


void MainWindow::onPreview( int id, int pos )
{
	ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(pos)) ;
}

void MainWindow::onSeekClick( int id, int pos )
{
	if( m_curVideo ) {
		if( id == -1 )
		{
			m_curVideo->trimBar()->onSetSeek(pos) ;
		}
		else
		{
			ui.lbl_main_seek->remoteSeek(pos) ;
		}
		if( m_isPlaying )
		{
			int cur = getMSec(QTime::currentTime()) ;
			cur -= pos - m_curVideo->info().startTime ;
			m_startTime = getTime(cur) ;
			m_audioTrack->setPosition(pos) ;
		}
		else
		{
			ui.lbl_screen->setMyImage(m_curVideo->trimBar()->screenshot(pos)) ;
		}
	}
}