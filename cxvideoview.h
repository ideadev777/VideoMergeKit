#ifndef CXVIDEOVIEW_H
#define CXVIDEOVIEW_H

#include <QLabel>
#include <QVideoWidget>

class CxVideoView : public QLabel
{
	Q_OBJECT

public:
	CxVideoView(QWidget *parent);
	~CxVideoView();
	void setMyImage( QImage pix ) ;
	QVideoWidget* myVideoWidget() { return m_videoWidget ; }
	void setVideoWidgetVisible( bool on ){ m_videoWidget->setVisible(on) ; }
signals:
	void __clicked() ;
protected:
	void paintEvent(QPaintEvent *event) ;
	void showEvent(QShowEvent *event) ;
	void mousePressEvent(QMouseEvent *event) ;
private:
	QImage m_pix ;
	QVideoWidget* m_videoWidget ;
};

#endif // CXVIDEOVIEW_H
