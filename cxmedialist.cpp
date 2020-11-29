#include "cxmedialist.h"
#define ITEMH 50
#include <QFileInfo>

CxPiece::CxPiece(mediaInfo info)
{
	ui.setupUi(this) ;
	connect( ui.tb_langcode, SIGNAL(clicked()), this, SLOT(onLanguageChanged())) ;
	ui.lbl_title->setText("   "+QFileInfo(info.filePath).fileName()) ;
}

void CxPiece::setSelected( bool on )
{
	QString qss = QString("background:#a0a0a0;color:white;%1").arg(on?"border:1px solid #fff000;":"") ;
	ui.lbl_title->setStyleSheet(qss) ;
}

void CxPiece::onLanguageChanged()
{
	ui.tb_langcode->setText(ui.tb_langcode->isChecked()?"GE":"EN") ;
}
//////////////////////////////////////////////////////////////////////////

CxMediaList::CxMediaList(QWidget *parent)
	: QListWidget(parent)
{
	connect( this, SIGNAL(itemSelectionChanged()), this, SLOT(onItemSelectionChanged())) ;
}

CxMediaList::~CxMediaList()
{

}

void CxMediaList::addMyItem(QString filePath)
{
	QListWidgetItem* item = new QListWidgetItem ;
	mediaInfo info ;
	info.filePath = filePath ;
	CxPiece* w = new CxPiece(info) ;
	addItem(item) ;
	setItemWidget(item,w) ;
	refit() ;
}

void CxMediaList::resizeEvent(QResizeEvent *event)
{
	QListWidget::resizeEvent(event) ;
	refit() ;
}

void CxMediaList::refit()
{
	int w = viewport()->width() ;
	for( int i = 0; i < count(); i++ )
	{
		QListWidgetItem* it = item(i) ;
		it->setSizeHint(QSize(w,ITEMH)) ;
		widgetAt(i)->resize(w,ITEMH) ;
	}
}

void CxMediaList::onItemSelectionChanged()
{
	int cnt = count() ;
	for( int i = 0; i < cnt; i++ )
	{
		CxPiece* w = widgetAt(i) ;
		if( w ) w->setSelected(item(i)->isSelected()) ;
	}
}