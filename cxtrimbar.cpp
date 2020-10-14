#include "cxtrimbar.h"
#define MARGIN 5

CxTrimBar::CxTrimBar(QWidget *parent)
	: QLabel(parent)
{
	m_seek = new QLabel(this) ;
	m_left = new QLabel(this) ;
	m_right = new QLabel(this) ;
	m_st = 0 ;
	m_en = 1 ;
	m_curSeekPos = 0 ;
	m_info.duration = 3600000 ;
	m_left->setStyleSheet("QLabel{background-color:#00E0FF;}") ;
	m_right->setStyleSheet("QLabel{background-color:#fff200;}") ;
	m_seek->setStyleSheet("QLabel{background-color:red;}") ;
	m_left->show() ;
	m_right->show() ;
	m_seek->show() ;
	m_seek->hide() ;
	m_movingIndex = -1 ;
	m_id = -1 ;
	m_isSelected = false ;
	m_isEditable = false ;
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
			qreal w = 1.0*(pnt.x()-MARGIN)/(width()-2*MARGIN) ;
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
	qreal w = 1.0*(event->pos().x()-MARGIN)/(width()-2*MARGIN-SEEKW) ;
	if( w < 0 || w > 1 || m_movingIndex == -1 ) return ;

	qreal st(m_st), en(m_en) ;
	qreal ww = (width()-2*MARGIN-SEEKW) ;
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
	painter.drawRect(0,0,w,h) ;
	painter.setBrush(QBrush("#d6d6d6")) ;
	painter.drawRoundedRect(MARGIN,MARGIN,w-2*MARGIN,h-2*MARGIN,5,5) ;
	painter.setPen(Qt::green) ;
	if( m_isSelected ) painter.setPen(Qt::blue) ;
	painter.setFont(QFont("Impact",m_isSelected?17:14)) ;
	painter.drawText(0,0,w,h,Qt::AlignCenter,m_info.fileName) ;
//	painter.drawText(0,0,w,h,Qt::AlignCenter,QString("%1 %2").arg(m_st).arg(m_en)) ;
}

void CxTrimBar::resizeEvent(QResizeEvent* event)
{
	QLabel::resizeEvent(event) ;
	fitSeekItems() ;
}

void CxTrimBar::fitSeekItems()
{
	int w = width()-2*MARGIN-SEEKW ;
	int h = height() ;
	m_left->setGeometry(MARGIN+w*m_st,MARGIN, SEEKW, h-2*MARGIN ) ;
	m_right->setGeometry(MARGIN+w*m_en,MARGIN, SEEKW, h-2*MARGIN ) ;
	m_seek->setGeometry(MARGIN+w*m_curSeekPos,MARGIN, SEEKW, h-2*MARGIN) ;
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
	m_curSeekPos = pos*1.0/m_info.duration ;
	fitSeekItems() ;
}