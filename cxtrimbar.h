#ifndef CXTRIMBAR_H
#define CXTRIMBAR_H

#include <QLabel>
#include "common.h"
#include <QPainter>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QMouseEvent>

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
	void setIndex( int id ){ m_id = id ; }
	void remoteSetSegment( int st, int en, bool emitSignal = false ) ;
	videoInfo info(){ return m_info ; }
	QImage screenshot(qint64 pos) ;
	void setEditable( bool on ){ m_isEditable = on; }
	void remoteSeek( qint64 pos ) ;
signals:
	void __curSeekPosChanged( int id, int st ) ;
	void __preview( int id, int msec ) ;
	void __rangeChanged( int id, int st, int en ) ;
public slots:
	void onSetSegment( qreal st, qreal en ) ;
	void onSetSeek( qreal seek ) ;
protected:
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
};

#endif // CXTRIMBAR_H
