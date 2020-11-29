#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMediaPlayer>
#include <QBasicTimer>

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
    MainWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);

public slots:
	void onMinimize() ;
	void onRestore() ;
	void onClose() ;
	void onUpload() ;
	void onRemove() ;
	void onStart() ;
	void onSaveTxt() ;
	void onSavePdf() ;
protected:
	void showEvent(QShowEvent* event) ;
	void resizeEvent(QResizeEvent *event) ;
	void mousePressEvent(QMouseEvent* event) ;
	void mouseMoveEvent(QMouseEvent* event) ;
	void mouseReleaseEvent(QMouseEvent *event) ;
private:
	void initUI() ;
	void initConenction() ;
	Ui::MainWindow ui ;
	bool m_isMaximized ;
	bool m_isPressing ;
	QPoint m_oriPnt ;
	QRect m_oriRect, m_restoreRect ;
};



#endif
