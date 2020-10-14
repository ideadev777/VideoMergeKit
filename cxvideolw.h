#ifndef CXVIDEOLW_H
#define CXVIDEOLW_H

#include <QListWidget>
#include "common.h"
#include "cxtrimbar.h"

class CxVideoItem : public QListWidgetItem
{
public:
	CxVideoItem(videoInfo info ) ;
	videoInfo info(){ return m_trimBar->info() ; }
	CxTrimBar* trimBar(){ return m_trimBar ; }
private:
//	videoInfo m_info ;
	CxTrimBar* m_trimBar ;
};

//////////////////////////////////////////////////////////////////////////

class CxVideoLW : public QListWidget
{
	Q_OBJECT

public:
	CxVideoLW(QWidget *parent);
	~CxVideoLW();
	void addVideo(QString filePath) ;
	CxVideoItem* videoItem( int id ){ return (CxVideoItem*)item(id) ; }
	videoInfo itemInfoAt( int id ){ return videoItem(id)->info() ; }
	CxTrimBar* trimBarAt( int id ){ return videoItem(id)->trimBar() ; }
signals:
	void __videoSelectionChanged(CxVideoItem* item) ;
	void __curSeekPosChanged( int id, int st ) ;
	void __preview( int id, int msec ) ;
	void __rangeChanged( int id, int st, int en ) ;
public slots:
	void onItemSelectionChanged() ;
protected:
	void resizeEvent(QResizeEvent *e) ;
private:
	void refitItems() ;
	QList<CxVideoItem*> m_itemList ;
};

#endif // CXVIDEOLW_H
