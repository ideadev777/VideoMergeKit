#include "cxvideolw.h"

CxVideoItem::CxVideoItem(videoInfo var )
{
	m_trimBar = new CxTrimBar ;
	m_trimBar->setVideoInfo(var) ;
}

//////////////////////////////////////////////////////////////////////////

CxVideoLW::CxVideoLW(QWidget *parent)
	: QListWidget(parent)
{
	setIconSize(QSize(viewport()->width(),TRIMBARHEIGHT)) ;
	setSpacing(3) ;
	setSelectionMode(QAbstractItemView::SingleSelection) ;
	connect( this, SIGNAL(itemSelectionChanged()), this, SLOT(onItemSelectionChanged())) ;
}

CxVideoLW::~CxVideoLW()
{

}

void CxVideoLW::addVideo(QString filePath)
{
	videoInfo var= getVideoDuration(filePath) ;
	if( var.duration == -1 )
	{
		QMessageBox::information(NULL,"Error", "Invalid file format") ;
		return ;
	}
	CxVideoItem* item = new CxVideoItem(var) ;
	addItem(item) ;
	CxTrimBar* bar = item->trimBar() ;
	bar->setEditable(true) ;
	bar->setCurSeekVisible(true) ;
	connect( bar, SIGNAL(__rangeChanged(int,int,int)), this, SIGNAL(__rangeChanged(int,int,int)) ) ;
	connect( bar, SIGNAL(__preview(int,int)), this, SIGNAL(__preview(int,int)) ) ;
	connect( bar, SIGNAL(__curSeekPosChanged(int,int)), this, SIGNAL(__curSeekPosChanged(int,int)) ) ;
	setItemWidget(item,bar) ;
	refitItems() ;
	m_itemList << item ;
	setCurrentItem(item) ;
}

void CxVideoLW::refitItems()
{
	int cnt = count() ;
	int w = viewport()->width() - 2*spacing();
	for( int i = 0; i < cnt; i++ )
	{
		item(i)->setSizeHint(QSize(w,TRIMBARHEIGHT)) ;
		CxTrimBar* bar = trimBarAt(i) ;
		bar->resize(w, TRIMBARHEIGHT ) ;
		bar->setIndex(i) ;
	}
}

void CxVideoLW::resizeEvent(QResizeEvent *event)
{
	QListWidget::resizeEvent(event) ;
	refitItems() ;
}

void CxVideoLW::onItemSelectionChanged()
{
	int cnt = count() ;
	CxVideoItem* sig = NULL ;
	for( int i = 0; i < cnt; i++ )
	{
		CxVideoItem* item = videoItem(i) ;
		CxTrimBar* bar = trimBarAt(i) ;
		if( !bar ) continue ;
		bool sel = item->isSelected() ;
		bar->setSelected(sel) ;
		if( sel ) sig = item ;
	}
	emit __videoSelectionChanged(sig) ;
}