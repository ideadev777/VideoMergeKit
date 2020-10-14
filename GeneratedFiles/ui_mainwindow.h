/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "cxdroppanel.h"
#include "cxtrimbar.h"
#include "cxvideolw.h"
#include "cxvideoview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget_7;
    QGridLayout *gridLayout_5;
    CxDropPanel *w_upload;
    QGridLayout *gridLayout_6;
    QWidget *widget_9;
    QGridLayout *gridLayout_7;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QWidget *widget_10;
    QGridLayout *gridLayout_8;
    QToolButton *tb_upload;
    QToolButton *tb_upload_menu;
    QSpacerItem *verticalSpacer;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    CxVideoView *lbl_screen;
    QWidget *widget_5;
    QWidget *widget_4;
    QGridLayout *gridLayout_9;
    CxTrimBar *lbl_main_seek;
    QWidget *widget_11;
    QGridLayout *gridLayout_10;
    QTimeEdit *te_end;
    QLabel *label_7;
    QToolButton *tb_play;
    QTimeEdit *te_start;
    QLabel *label_6;
    QToolButton *tb_merge;
    QWidget *widget_12;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout_11;
    CxVideoLW *lw_video;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(895, 682);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 482));
        widget->setMaximumSize(QSize(16777215, 482));
        widget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#202d64;\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 20, 0, 5);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 338));
        widget_3->setMaximumSize(QSize(16777215, 338));
        widget_3->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 15, 0);
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(140, 0));
        widget_7->setMaximumSize(QSize(140, 16777215));
        gridLayout_5 = new QGridLayout(widget_7);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(10, 0, 0, 0);
        w_upload = new CxDropPanel(widget_7);
        w_upload->setObjectName(QStringLiteral("w_upload"));
        w_upload->setMinimumSize(QSize(0, 120));
        w_upload->setMaximumSize(QSize(16777215, 120));
        w_upload->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#1C2E78;\n"
"}"));
        gridLayout_6 = new QGridLayout(w_upload);
        gridLayout_6->setSpacing(4);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        widget_9 = new QWidget(w_upload);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(0, 40));
        gridLayout_7 = new QGridLayout(widget_9);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/icon/download.png")));
        label_3->setScaledContents(true);

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(widget_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:white;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_4, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_9, 2, 0, 1, 1);

        label_2 = new QLabel(w_upload);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setMaximumSize(QSize(16777215, 25));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:white;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        widget_10 = new QWidget(w_upload);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#ffffff;\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"}"));
        gridLayout_8 = new QGridLayout(widget_10);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(0);
        gridLayout_8->setContentsMargins(8, 5, 8, 5);
        tb_upload = new QToolButton(widget_10);
        tb_upload->setObjectName(QStringLiteral("tb_upload"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tb_upload->sizePolicy().hasHeightForWidth());
        tb_upload->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        tb_upload->setFont(font1);
        tb_upload->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#9BC253;\n"
"color:#fff200;\n"
"}"));

        gridLayout_8->addWidget(tb_upload, 0, 0, 1, 1);

        tb_upload_menu = new QToolButton(widget_10);
        tb_upload_menu->setObjectName(QStringLiteral("tb_upload_menu"));
        sizePolicy1.setHeightForWidth(tb_upload_menu->sizePolicy().hasHeightForWidth());
        tb_upload_menu->setSizePolicy(sizePolicy1);
        tb_upload_menu->setMinimumSize(QSize(20, 0));
        tb_upload_menu->setMaximumSize(QSize(20, 16777215));
        tb_upload_menu->setFont(font1);
        tb_upload_menu->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"color:#fff200;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icon/drop-down-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_upload_menu->setIcon(icon1);
        tb_upload_menu->setIconSize(QSize(13, 13));

        gridLayout_8->addWidget(tb_upload_menu, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_10, 0, 0, 1, 1);


        gridLayout_5->addWidget(w_upload, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget_7, 0, 2, 1, 1);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_screen = new CxVideoView(widget_6);
        lbl_screen->setObjectName(QStringLiteral("lbl_screen"));
        lbl_screen->setMinimumSize(QSize(600, 338));
        lbl_screen->setMaximumSize(QSize(600, 338));
        lbl_screen->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border:5px solid #fff200;\n"
"}"));

        gridLayout_4->addWidget(lbl_screen, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 0, 1, 1, 1);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(140, 0));
        widget_5->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(widget_5, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(0, 100));
        gridLayout_9 = new QGridLayout(widget_4);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(10);
        gridLayout_9->setContentsMargins(-1, -1, -1, 0);
        lbl_main_seek = new CxTrimBar(widget_4);
        lbl_main_seek->setObjectName(QStringLiteral("lbl_main_seek"));
        lbl_main_seek->setMinimumSize(QSize(0, 50));
        lbl_main_seek->setMaximumSize(QSize(16777215, 50));
        lbl_main_seek->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background:#fff200;\n"
"}"));

        gridLayout_9->addWidget(lbl_main_seek, 0, 0, 1, 1);

        widget_11 = new QWidget(widget_4);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(0, 50));
        widget_11->setMaximumSize(QSize(16777215, 50));
        widget_11->setStyleSheet(QStringLiteral(""));
        gridLayout_10 = new QGridLayout(widget_11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(15);
        gridLayout_10->setContentsMargins(40, 0, -1, 0);
        te_end = new QTimeEdit(widget_11);
        te_end->setObjectName(QStringLiteral("te_end"));
        te_end->setMinimumSize(QSize(100, 50));
        te_end->setMaximumSize(QSize(100, 50));
        QFont font2;
        font2.setPointSize(10);
        te_end->setFont(font2);
        te_end->setStyleSheet(QLatin1String("QTimeEdit\n"
"{\n"
"background:#182d3f;\n"
"color:white;\n"
"border:1px solid #182d3f;\n"
"border-radius:10px;\n"
"}"));

        gridLayout_10->addWidget(te_end, 0, 5, 1, 1);

        label_7 = new QLabel(widget_11);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 50));
        label_7->setMaximumSize(QSize(16777215, 50));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#1f618b;\n"
"}"));

        gridLayout_10->addWidget(label_7, 0, 4, 1, 1);

        tb_play = new QToolButton(widget_11);
        tb_play->setObjectName(QStringLiteral("tb_play"));
        tb_play->setMinimumSize(QSize(80, 50));
        tb_play->setMaximumSize(QSize(80, 50));
        tb_play->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#181d3f;\n"
"border:1px solid #181d3f;\n"
"border-radius:18px;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"background:#3ccaf4;\n"
"border:1px solid #181d3f;\n"
"border-radius:18px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icon/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/res/icon/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        tb_play->setIcon(icon2);
        tb_play->setIconSize(QSize(40, 40));
        tb_play->setCheckable(true);

        gridLayout_10->addWidget(tb_play, 0, 0, 1, 1);

        te_start = new QTimeEdit(widget_11);
        te_start->setObjectName(QStringLiteral("te_start"));
        te_start->setMinimumSize(QSize(100, 50));
        te_start->setMaximumSize(QSize(100, 50));
        te_start->setFont(font2);
        te_start->setStyleSheet(QLatin1String("QTimeEdit\n"
"{\n"
"background:#182d3f;\n"
"color:white;\n"
"border:1px solid #182d3f;\n"
"border-radius:10px;\n"
"}"));

        gridLayout_10->addWidget(te_start, 0, 3, 1, 1);

        label_6 = new QLabel(widget_11);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 50));
        label_6->setMaximumSize(QSize(16777215, 50));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#1f618b;\n"
"}"));

        gridLayout_10->addWidget(label_6, 0, 2, 1, 1);

        tb_merge = new QToolButton(widget_11);
        tb_merge->setObjectName(QStringLiteral("tb_merge"));
        tb_merge->setMinimumSize(QSize(150, 50));
        tb_merge->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font3.setPointSize(14);
        tb_merge->setFont(font3);
        tb_merge->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#fff200;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"background:#ffd96a;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icon/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_merge->setIcon(icon3);
        tb_merge->setIconSize(QSize(40, 40));
        tb_merge->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_10->addWidget(tb_merge, 0, 7, 1, 1);

        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setMinimumSize(QSize(150, 50));
        widget_12->setMaximumSize(QSize(16777215, 50));

        gridLayout_10->addWidget(widget_12, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget_11, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget_4, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 200));
        widget_2->setMaximumSize(QSize(16777215, 11111111));
        widget_2->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c5c8ef;\n"
"}"));
        gridLayout_11 = new QGridLayout(widget_2);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        lw_video = new CxVideoLW(widget_2);
        lw_video->setObjectName(QStringLiteral("lw_video"));

        gridLayout_11->addWidget(lw_video, 0, 0, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Merge MP4", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Drop file here", 0));
        label_2->setText(QApplication::translate("MainWindow", "or", 0));
        tb_upload->setText(QApplication::translate("MainWindow", "UPLOAD", 0));
        tb_upload_menu->setText(QString());
        lbl_screen->setText(QString());
        lbl_main_seek->setText(QString());
        te_end->setDisplayFormat(QApplication::translate("MainWindow", "hh:mm:ss", 0));
        label_7->setText(QApplication::translate("MainWindow", "End:", 0));
        tb_play->setText(QApplication::translate("MainWindow", "...", 0));
        te_start->setDisplayFormat(QApplication::translate("MainWindow", "hh:mm:ss", 0));
        label_6->setText(QApplication::translate("MainWindow", "Start:", 0));
        tb_merge->setText(QApplication::translate("MainWindow", "CONNECT MP4", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
