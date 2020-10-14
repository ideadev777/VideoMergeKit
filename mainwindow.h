#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMediaPlayer>
#include <QBasicTimer>
#include "cxprogressdlg.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
    MainWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);

public slots:
	void onUpload() ;
	void onMerge() ;
	void onPlayButton() ;
	void uploadVideo(QString fileName) ;
	void onVideoSelectionChanged(CxVideoItem* item) ;
	void onStartTimeChanged(QTime) ;
	void onEndTimeChanged(QTime) ;
	void onVideoRangeChanged( int r, int st, int en ) ;
	void onAudioStateChanged(QMediaPlayer::State) ;
	void onSeekableChanged( bool on ) ;
	void onVideoPostionChanged( qint64 pos ) ;
	void onPreview( int id, int pos ) ;
	void onSeekClick( int id, int pos ) ;
	void onViewClick() ;

	void onMinimize() ;
	void onRestore() ;
	void onClose() ;
	void onNext() ;
	void onPrev() ;
	void onSeekPlay() ;
protected:
	void timerEvent(QTimerEvent* event) ;
	void showEvent(QShowEvent* event) ;
	void resizeEvent(QResizeEvent *event) ;
	void mousePressEvent(QMouseEvent* event) ;
	void mouseMoveEvent(QMouseEvent* event) ;
	void mouseReleaseEvent(QMouseEvent *event) ;
private:
	void play( int id ) ;
	void stopPlaying() ;
	void initUI() ;
	void initConenction() ;
	void setEditable( bool on ) ;
	void refit() ;
	void resizeSeekBar() ;
	Ui::MainWindow ui ;
	CxVideoLW* m_resLW ;
	CxVideoItem* m_curVideo ;
	bool m_isRemoteSet; 
	bool m_isPlaying ;
	int m_curPlayID ;
	bool m_isSeeked ;
	QBasicTimer m_timer ;
	QMediaPlayer* m_audioTrack ;
	QTime m_startTime ;
	CxProgressDlg* m_progressDlg ;
	QSize m_curVideoSize ;
	CxTrimBar* m_seekBar ;
	bool m_isMaximized ;
	bool m_isPressing ;
	QPoint m_oriPnt ;
	QRect m_oriRect, m_restoreRect ;
};



#endif
