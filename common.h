#ifndef COMMON_H
#define COMMON_H

#define SCENEWIDTH 1280
#define SCENEHEIGHT 720

#include <QMessageBox>
#include <QString>
#include <QObject>
#include <QTime>
#include <QPixmap>
#include <QFileInfo>

#include "core/core.hpp"
#include "highgui/highgui.hpp"
#include "imgproc/imgproc.hpp"

#define DEFAULTFRAMERATE 29.7
#define TRIMBARHEIGHT 50
#define SEEKW 8
using namespace cv ;

struct videoInfo{
	QString fileName ;
	int duration ;
	int fps ;
	int totFrame; 
	int startTime ;
	int endTime ;
};

struct mediaInfo
{
	QString filePath ;
	bool isVideo ;
	int duration ;
	int langCode ;
};

QString  createUuid() ;
QString createSimpleUuid() ;
int getMSec(QTime t) ;
QTime getTime(int msec) ;

QImage Mat2QImage(Mat const& src) ;
Mat QImage2Mat(QImage const& src) ;
videoInfo getVideoDuration(QString filePath) ;
bool isValidSuffix(QString fileName) ;

QString mmss( int t ) ;
#endif // COMMON_H
