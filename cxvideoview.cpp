#include "cxvideoview.h"
#include <QPainter>
#include <QMouseEvent>

CxVideoView::CxVideoView(QWidget *parent)
	: QLabel(parent)
{
	m_videoWidget = new QVideoWidget(this) ;
	m_videoWidget->show() ;
}

CxVideoView::~CxVideoView()
{

}

void CxVideoView::paintEvent(QPaintEvent *event)
{
	QPainter painter(this) ;
	painter.setRenderHint(QPainter::SmoothPixmapTransform) ;
	painter.setRenderHint(QPainter::Antialiasing) ;
	int w = width() ;
	int h = height() ;
	int dx = 5 ;
	painter.setBrush(QBrush("#fff200")) ;
	painter.drawRect(0,0,w,h) ;
	if( m_pix.isNull() )
	{
		painter.setBrush(QBrush("#202d64")) ;
		painter.drawRect(dx,dx,w-2*dx,h-2*dx) ;
	}
	else{
		painter.setBrush(Qt::black) ;
		painter.drawRect(dx,dx,w-2*dx,h-2*dx) ;
		QImage pix = m_pix.scaled(w-2*dx,h-2*dx,Qt::KeepAspectRatio,Qt::SmoothTransformation) ;
		painter.drawImage( dx+(w-2*dx-pix.width())/2, dx+(h-2*dx-pix.height())/2 ,pix) ;
	}
}

void CxVideoView::setMyImage(QImage pix)
{
	m_pix = pix ;
	repaint() ;
}

void CxVideoView::showEvent(QShowEvent *event)
{
	QLabel::showEvent(event) ;
	int dx = 5 ;
	m_videoWidget->setGeometry(dx,dx,width()-2*dx,height()-2*dx) ;
}

void CxVideoView::mousePressEvent(QMouseEvent *event)
{
	event->ignore() ;
	emit __clicked() ;
}