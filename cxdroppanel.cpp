#include "cxdroppanel.h"
#include <QUrl>
#include <QMimeData>
#include <QMessageBox>

CxDropPanel::CxDropPanel(QWidget *parent)
	: QWidget(parent)
{
	setAcceptDrops(true) ;
}

CxDropPanel::~CxDropPanel()
{

}

void CxDropPanel::dragEnterEvent(QDragEnterEvent * evt) {
	if(evt->mimeData()->hasUrls())
		evt->accept();
}

void CxDropPanel::dropEvent(QDropEvent * evt) {
	QList<QUrl> urls = evt->mimeData()->urls();
	foreach(QUrl url, urls) {
		emit __uploadVideo(url.toLocalFile()) ;
	}
}