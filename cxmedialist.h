#ifndef CXMEDIALIST_H
#define CXMEDIALIST_H

#include <QListWidget>
#include "ui_w_media_widget.h"
#include "common.h"

class CxPiece : public QWidget
{
	Q_OBJECT
public:
	CxPiece(mediaInfo info) ;
	void setSelected( bool on ) ;
public slots:
	void onLanguageChanged() ;
private:
	Ui::Form_Media ui ;
	mediaInfo m_info ;
};

class CxMediaList : public QListWidget
{
	Q_OBJECT

public:
	CxMediaList(QWidget *parent);
	~CxMediaList();
	void addMyItem(QString filePath) ;
	CxPiece* widgetAt( int id ){ return (CxPiece*) itemWidget(item(id)) ; }
public slots:
	void onItemSelectionChanged() ;
protected:
	void resizeEvent(QResizeEvent *event) ;
private:
	void refit() ;
};

#endif // CXMEDIALIST_H
