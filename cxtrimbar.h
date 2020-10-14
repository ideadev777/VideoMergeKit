#ifndef CXTRIMBAR_H
#define CXTRIMBAR_H

#include <QLabel>
#include "common.h"
#include <QPainter>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QToolButton>

class CxTrimBar : public QLabel
{
	Q_OBJECT

public:
	CxTrimBar(QWidget *parent=0);
	~CxTrimBar();
	void fitSeekItems() ;
	QRect availableRect() ;
	void setLeftSeekVisible(bool on){ m_left->setVisible(on) ; }
	void setRightSeekVisible(bool on){ m_right->setVisible(on) ; }
	void setCurSeekVisible(bool on){ m_seek->setVisible(on) ; }
	void setVideoInfo(videoInfo info) ;
	void setSelected( bool on ) ;
	void setIndex( int id ) ;
	void remoteSetSegment( int st, int en, bool emitSignal = false ) ;
	videoInfo info(){ return m_info ; }
	QImage screenshot(qint64 pos) ;
	void setEditable( bool on ){ m_isEditable = on; }
	void remoteSeek( qint64 pos ) ;
	void setTransparentBar( bool on ) ;
	void setIcon(QIcon icon, QToolButton* btn) ;
	QToolButton* playButton(){ return m_playBtn ; }
	void setPlayPanelVisible( bool on ) ;
signals:
	void __curSeekPosChanged( int id, int st ) ;
	void __preview( int id, int msec ) ;
	void __rangeChanged( int id, int st, int en ) ;
	void __prev() ;
	void __next() ;
	void __play() ;
public slots:
	void onSetSegment( qreal st, qreal en ) ;
	void onSetSeek( qreal seek ) ;
protected:
	void closeEvent(QCloseEvent* event) ;
	void paintEvent(QPaintEvent* event) ;
	void mousePressEvent(QMouseEvent* event) ;
	void mouseMoveEvent(QMouseEvent* event) ;
	void mouseReleaseEvent(QMouseEvent* event) ;
	void resizeEvent(QResizeEvent* event) ;
private:
	QLabel* m_left ;
	QLabel* m_right ;
	QLabel* m_seek ;
	qreal m_st, m_en ;
	int m_movingIndex ;
	qreal m_curSeekPos ;
	QPoint m_startPnt ;
	bool m_isSelected ;
	bool m_isEditable ;
	videoInfo m_info ;
	VideoCapture m_capture ;
	int m_id ;
	int m_seekWidth, m_margin ;
	bool m_isTransparentBar ;
	QToolButton* m_prevBtn ;
	QToolButton* m_nxtBtn ;
	QToolButton* m_playBtn ;
	QLabel* m_timeBar ;
};

#endif // CXTRIMBAR_H
