#ifndef CXDROPPANEL_H
#define CXDROPPANEL_H

#include <QWidget>
#include <QDragEnterEvent>
#include <QDropEvent>

class CxDropPanel : public QWidget
{
	Q_OBJECT

public:
	CxDropPanel(QWidget *parent);
	~CxDropPanel();
signals:
	void __uploadVideo(QString fileName) ;
protected:
	void dragEnterEvent(QDragEnterEvent *eve) ;
	void dropEvent(QDropEvent *eve) ;
private:
	
};

#endif // CXDROPPANEL_H
