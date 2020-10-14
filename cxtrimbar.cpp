#include "cxtrimbar.h"
#include <QCloseEvent>

CxTrimBar::CxTrimBar(QWidget *parent)
	: QLabel(parent), m_timeBar(NULL)
{
	m_seek = new QLabel(this) ;
	m_left = new QLabel(this) ;
	m_right = new QLabel(this) ;
	m_st = 0 ;
	m_en = 1 ;
	m_curSeekPos = 0 ;
	m_info.duration = 3600000 ;
	m_left->setStyleSheet("QLabel{background-color:black;}") ;
	m_right->setStyleSheet("QLabel{background-color:black;}") ;
	m_seek->setStyleSheet("QLabel{background-color:red;}") ;
	m_left->show() ;
	m_right->show() ;
	m_seek->show() ;
	m_seek->hide() ;
	m_movingIndex = -1 ;
	m_id = -1 ;
	m_isSelected = false ;
	m_isEditable = false ;
	m_seekWidth = 15;
	m_margin = 5 ;
	m_isTransparentBar = false ;
}

CxTrimBar::~CxTrimBar()
{

}

void CxTrimBar::mousePressEvent(QMouseEvent* event)
{
	QLabel::mousePressEvent(event) ;
	QRect rc = availableRect() ;
	QPoint pnt = event->pos() ;
	if( m_left->geometry().contains(pnt) && m_left->isVisible() ) m_movingIndex = 0 ;
	if( m_right->geometry().contains(pnt) && m_right->isVisible()) m_movingIndex = 1 ;
	if( m_movingIndex == -1 )
	{
		if( m_seek->geometry().contains(pnt) && m_seek->isVisible() ) m_movingIndex = 3 ;
	}
	if( m_movingIndex == -1 ) {
		if( rc.contains(pnt) ) 
		{
			qreal w = 1.0*(pnt.x()-m_margin)/(width()-2*m_margin) ;
			emit __curSeekPosChanged( m_id, w*m_info.duration) ;
			onSetSeek(w) ;
		}
		return ;
	}
	if( !m_isEditable ) {
		m_movingIndex = -1 ;
		return ;
	}
	m_startPnt = pnt ;
}

void CxTrimBar::mouseMoveEvent(QMouseEvent* event)
{
	QLabel::mouseMoveEvent(event) ;
	if( !m_isEditable ) return ;
	qreal w = 1.0*(event->pos().x()-m_margin)/(width()-2*m_margin-m_seekWidth) ;
	if( w < 0 || w > 1 || m_movingIndex == -1 ) return ;

	qreal st(m_st), en(m_en) ;
	qreal ww = (width()-2*m_margin-m_seekWidth) ;
	if( m_movingIndex == 0 ) st = w ;
	if( m_movingIndex == 1 ) en = w ;
	if( m_movingIndex == 3 )
	{
		w = 1.0*(event->pos().x()-m_startPnt.x())/ww ;
		if( m_curSeekPos+w < m_st ) w = m_curSeekPos-m_st ;
		if( m_curSeekPos+w > m_en ) w = m_en-m_curSeekPos ;
		emit __curSeekPosChanged( m_id, m_info.duration*(w+m_curSeekPos)) ;
		onSetSeek(w+m_curSeekPos) ;
		m_startPnt = event->pos() ;
		return ;
	}
	if( st > en-1e-3 ) return ;
	if( st*ww > en*ww-10 ) return ; // keep at least 4 distance each other.
	onSetSegment(st,en) ;
	repaint() ;
//	QMessageBox::information(NULL,"",QString("%1").arg(st*m_info.duration)) ;
	emit __rangeChanged(  m_id, st*m_info.duration, en*m_info.duration ) ;
//	emit __onRangeChanged(st,en,true) ;
	if( m_movingIndex == 0 ) emit __preview( m_id, m_info.duration*m_st) ;
	if( m_movingIndex == 1 ) emit __preview( m_id, m_info.duration*m_en) ;
}

void CxTrimBar::mouseReleaseEvent(QMouseEvent* event)
{
	QLabel::mouseReleaseEvent(event) ;
	m_movingIndex = -1 ;
}

void CxTrimBar::onSetSeek( qreal seek )
{
	m_curSeekPos = seek ;
	fitSeekItems() ;
	repaint() ;
}

void CxTrimBar::paintEvent(QPaintEvent* event)
{
	QPainter painter(this) ;
	painter.setBrush(QBrush("#202d64")) ;
	int w = width();
	int h = height() ;
	painter.setPen(Qt::NoPen) ;
	if( m_isTransparentBar ) painter.setBrush(Qt::NoBrush) ;
	if( m_id != -1 ) painter.drawRect(0,0,w,h) ;
	painter.setBrush(QBrush("#d6d6d6")) ;
	if( m_id == -1 ) painter.setBrush(QBrush("#fff200")) ;
	if( !m_isTransparentBar ) painter.drawRoundedRect(m_margin,m_margin,w-2*m_margin,h-2*m_margin,5,5) ;
	else
	{
		painter.setBrush(Qt::red) ;
		painter.drawRect(0,h/2-3,w,6) ;
	}
	painter.setPen(Qt::green) ;
	if( m_isSelected ) painter.setPen(Qt::blue) ;
	painter.setFont(QFont("Impact",m_isSelected?17:14)) ;
	if( !m_isTransparentBar && m_id != -1 ) painter.drawText(0,0,w,h,Qt::AlignCenter,m_info.fileName) ;
//	painter.drawText(0,0,w,h,Qt::AlignCenter,QString("%1 %2").arg(m_st).arg(m_en)) ;
}

void CxTrimBar::resizeEvent(QResizeEvent* event)
{
	QLabel::resizeEvent(event) ;
	fitSeekItems() ;
}

void CxTrimBar::fitSeekItems()
{
	int w = width()-2*m_margin-m_seekWidth ;
	int h = height() ;
	m_left->setGeometry(m_margin+w*m_st,m_margin, m_seekWidth, h-2*m_margin ) ;
	m_right->setGeometry(m_margin+w*m_en,m_margin, m_seekWidth, h-2*m_margin ) ;
	m_seek->setGeometry(m_margin+w*m_curSeekPos,m_margin, m_seekWidth, h-2*m_margin) ;
	if( m_timeBar )
	{
		m_timeBar->setText(QString("%1/%2").arg(mmss(m_info.duration*m_curSeekPos)).arg(mmss(m_info.duration))) ;
	}
	repaint() ;
}

QRect CxTrimBar::availableRect()
{
	return QRect(m_left->geometry().topLeft(),m_right->geometry().bottomRight()) ;
}

void CxTrimBar::remoteSetSegment( int st, int en, bool emigSignal )
{
	qreal s = st*1.0/m_info.duration ;
	if( st == -1 ) s = m_st ;
	qreal e = en*1.0/m_info.duration ;
	if( en == -1 ) e = m_en ;
	onSetSegment(s,e) ;
	if( emigSignal ) emit __rangeChanged(m_id,st,en) ;
}

void CxTrimBar::onSetSegment( qreal st, qreal en )
{
	if( st > en-1e-5 ) return ;
	m_st = st ;
	m_en = en ;
	m_info.startTime = m_st*m_info.duration ;
	m_info.endTime = m_en*m_info.duration ;
	m_curSeekPos = st ;
	fitSeekItems() ;
	repaint() ;
}


void CxTrimBar::setSelected( bool on )
{
	m_isSelected = on ;
	setCurSeekVisible(on) ;
	repaint() ;
}

void CxTrimBar::setVideoInfo(videoInfo info)
{
	m_info = info ;
	if( m_capture.isOpened() ) m_capture.release() ;
	m_capture.open(m_info.fileName.toStdString().c_str()) ;
	repaint() ;
	if( m_timeBar )
	{
		m_timeBar->setText(QString("%1/%2").arg(mmss(m_info.startTime)).arg(mmss(m_info.duration))) ;
	}
}

QImage CxTrimBar::screenshot(qint64 pos)
{
	QImage ret ;
	if( m_capture.isOpened() )
	{
		m_capture.set(CV_CAP_PROP_POS_MSEC,pos) ;
		Mat img ;
		m_capture.read(img) ;
		if( !img.empty() )
		{
			ret = Mat2QImage(img) ;
		}
	}
	/*
	VideoCapture cap(m_info.fileName.toStdString().c_str()) ;
	if( cap.isOpened() )
	{
		cap.set(CV_CAP_PROP_POS_MSEC,pos) ;
		Mat img ;
		cap.read(img) ;
		if( !img.empty() )
		{
			ret = Mat2QImage(img) ;
		}
		cap.release() ;
	}
	*/
	return ret ;
}

void CxTrimBar::remoteSeek( qint64 pos )
{
	qreal var = pos*1.0/m_info.duration ;
	if( fabs(var-m_curSeekPos)<1e-5) return ;
	m_curSeekPos = var ;
	fitSeekItems() ;
}

void CxTrimBar::setIndex( int id )
{
	m_id = id ;
//	if( id == -1 ) m_seekWidth = 20 ;
	fitSeekItems() ;
}

void CxTrimBar::setTransparentBar( bool on )
{
	m_isTransparentBar = on ;
	m_margin = (on?0:5) ;
	fitSeekItems() ;
	if( on ){
		m_left->setStyleSheet("QLabel{background-color:yellow;}") ;
		m_right->setStyleSheet("QLabel{background-color:yellow;}") ;
		setWindowFlags(Qt::FramelessWindowHint | Qt::SplashScreen);
		setAttribute(Qt::WA_NoSystemBackground, true);
		setAttribute(Qt::WA_TranslucentBackground, true);
		m_timeBar = new QLabel(this) ;
		m_timeBar->setFont(QFont("arial",11)) ;
		m_timeBar->setAlignment(Qt::AlignCenter) ;
		m_nxtBtn = new QToolButton(this) ;
		m_prevBtn = new QToolButton(this) ;
		m_playBtn = new QToolButton(this) ;
		int h = 70 ;
		int sz = 30 ;
		m_prevBtn->setGeometry(10,h-sz,sz,sz) ;
		m_playBtn->setGeometry(10+sz,h-sz,sz,sz) ;
		m_nxtBtn->setGeometry(10+2*sz,h-sz,sz,sz) ;
		m_timeBar->setGeometry(10+3*sz,h-sz,100,sz) ;
		m_timeBar->setStyleSheet("QLabel{background:none;color:white;}") ;
		m_playBtn->setCheckable(true) ;
		setIcon(QIcon(":/res/icon/next_1.png"),m_nxtBtn) ;
		setIcon(QIcon(":/res/icon/prev_1.png"),m_prevBtn) ;

		QIcon icon;
		icon.addPixmap(QPixmap(":/res/icon/play_2.png"), QIcon::Normal, QIcon::Off);
		icon.addPixmap(QPixmap(":/res/icon/pause_2.png"), QIcon::Normal, QIcon::On);
		setIcon(icon,m_playBtn) ;
		connect( m_playBtn, SIGNAL(clicked()), this, SIGNAL(__play())) ;
		connect( m_nxtBtn, SIGNAL(clicked()), this, SIGNAL(__next())) ;
		connect( m_prevBtn, SIGNAL(clicked()), this, SIGNAL(__prev())) ;
	}
	else{
		m_left->setStyleSheet("QLabel{background-color:black;}") ;
		m_right->setStyleSheet("QLabel{background-color:black;}") ;
	}
}

void CxTrimBar::setIcon(QIcon icon, QToolButton* btn)
{
	btn->setStyleSheet("QToolButton{background:transparent;}") ;
//	btn->setAttribute(Qt::WA_TranslucentBackground);
	btn->setIcon(icon) ;
	btn->setIconSize(QSize(35,35)) ;
}

void CxTrimBar::closeEvent(QCloseEvent* event)
{
	event->ignore() ;
}

void CxTrimBar::setPlayPanelVisible(bool on)
{

}
