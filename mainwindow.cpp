#include "mainwindow.h"
#include <QFileDialog>
#include <QUrl>
#include <QTimerEvent>
#include <QProcess>
#include <QDesktopWidget>
#include <QMouseEvent>
#define FIXH 700
#define FIXW 1000

#include "license.h"

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags)
{
//	if( !isLicensed() ) exit(1) ;
	ui.setupUi(this) ;
	initUI() ;
	initConenction() ;

	m_isPressing = false ;
	onRestore() ;
} 

void MainWindow::initUI()
{
//	setFixedSize(895,700) ;
	setWindowFlags(Qt::FramelessWindowHint|Qt::Window|Qt::WindowMinimizeButtonHint) ;
	m_isMaximized = false ;
}

void MainWindow::initConenction()
{
	connect( ui.tb_minimize, SIGNAL(clicked()), this, SLOT(onMinimize())) ;
	connect( ui.tb_restore, SIGNAL(clicked()), this, SLOT(onRestore())) ;
	connect( ui.tb_close, SIGNAL(clicked()), this, SLOT(onClose())) ;
	connect( ui.tb_upload, SIGNAL(clicked()), this, SLOT(onUpload())) ;
	connect( ui.tb_remove, SIGNAL(clicked()), this, SLOT(onRemove())) ;
	connect( ui.tb_start, SIGNAL(clicked()), this, SLOT(onStart())) ;
	connect( ui.tb_save_txt, SIGNAL(clicked()), this, SLOT(onSaveTxt())) ;
	connect( ui.tb_save_pdf, SIGNAL(clicked()), this, SLOT(onSavePdf())) ;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
	QMainWindow::resizeEvent(event) ;
}

void MainWindow::showEvent(QShowEvent* event)
{
	QMainWindow::showEvent(event) ;
}

void MainWindow::mousePressEvent(QMouseEvent* event)
{
	QMainWindow::mousePressEvent(event) ;
	if( m_isMaximized ) return ;
	m_oriRect = geometry() ;
	m_oriPnt = event->globalPos() ;
	if( event->pos().y() < 0 || event->pos().y() > 40 ) return ;
	m_isPressing = true ;
}

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
	QMainWindow::mouseMoveEvent(event) ;
	if( !m_isPressing ) return ;
	QPoint tmp = event->globalPos()-m_oriPnt ;
	QRect geo = m_oriRect.translated(tmp.x(),tmp.y()) ;
	setGeometry(geo);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
	QMainWindow::mouseReleaseEvent(event) ;
	m_isPressing = false ;
}

void MainWindow::onMinimize()
{
	showMinimized() ;
}

void MainWindow::onRestore()
{
	if( m_isMaximized ){
		setGeometry(m_restoreRect) ;
		setFixedSize(FIXW,FIXH) ;
	}
	else
	{
		m_restoreRect = geometry() ;
		setGeometry(QApplication::desktop()->availableGeometry()) ;
		setFixedSize(QApplication::desktop()->availableGeometry().size()) ;
	}
	m_isMaximized = !m_isMaximized ;
}

void MainWindow::onClose()
{
	close() ;
}

void MainWindow::onSavePdf()
{

}

void MainWindow::onSaveTxt()
{

}

void MainWindow::onUpload()
{
	ui.listWidget->addMyItem("D://1.wav") ;
	ui.listWidget->addMyItem("D://1.wav") ;
	ui.listWidget->addMyItem("D://1.wav") ;
	ui.listWidget->addMyItem("D://1.wav") ;
}

void MainWindow::onRemove()
{
	ui.listWidget->takeItem(ui.listWidget->currentRow()) ;
}

void MainWindow::onStart()
{

}