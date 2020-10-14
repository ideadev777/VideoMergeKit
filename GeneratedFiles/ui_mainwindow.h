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
    CxVideoLW *lw_video;
    QWidget *w_main;
    QGridLayout *gridLayout_2;
    QWidget *w_screen;
    QGridLayout *gridLayout_3;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    CxVideoView *lbl_screen;
    QWidget *w_control;
    QGridLayout *gridLayout_9;
    QWidget *widget_11;
    QGridLayout *gridLayout_10;
    CxDropPanel *w_upload;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *label_2;
    QToolButton *tb_merge;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_10;
    QGridLayout *gridLayout_8;
    QToolButton *tb_upload;
    QToolButton *tb_upload_menu;
    QWidget *w_seek;
    QGridLayout *gridLayout_5;
    CxTrimBar *lbl_main_seek;
    QWidget *w_top;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QLabel *label_3;
    QToolButton *tb_minimize;
    QToolButton *tb_close;
    QToolButton *tb_restore;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1046, 717);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#3F48CC;\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 10);
        lw_video = new CxVideoLW(centralwidget);
        lw_video->setObjectName(QStringLiteral("lw_video"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lw_video->sizePolicy().hasHeightForWidth());
        lw_video->setSizePolicy(sizePolicy);
        lw_video->setMaximumSize(QSize(16777215, 16777215));
        lw_video->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background:#c5cfe8;\n"
"}"));

        gridLayout->addWidget(lw_video, 2, 0, 1, 1);

        w_main = new QWidget(centralwidget);
        w_main->setObjectName(QStringLiteral("w_main"));
        w_main->setMinimumSize(QSize(0, 0));
        w_main->setMaximumSize(QSize(16777215, 16777215));
        w_main->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#000000;\n"
"}"));
        gridLayout_2 = new QGridLayout(w_main);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 3, 0, 5);
        w_screen = new QWidget(w_main);
        w_screen->setObjectName(QStringLiteral("w_screen"));
        w_screen->setMinimumSize(QSize(0, 0));
        w_screen->setMaximumSize(QSize(16777215, 16777215));
        w_screen->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(w_screen);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(w_screen);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_screen = new CxVideoView(widget_6);
        lbl_screen->setObjectName(QStringLiteral("lbl_screen"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_screen->sizePolicy().hasHeightForWidth());
        lbl_screen->setSizePolicy(sizePolicy1);
        lbl_screen->setMinimumSize(QSize(0, 0));
        lbl_screen->setMaximumSize(QSize(1111111, 16777215));
        lbl_screen->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(lbl_screen, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 0, 0, 1, 1);


        gridLayout_2->addWidget(w_screen, 0, 0, 1, 1);

        w_control = new QWidget(w_main);
        w_control->setObjectName(QStringLiteral("w_control"));
        w_control->setMinimumSize(QSize(0, 160));
        w_control->setMaximumSize(QSize(16777215, 160));
        w_control->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#3F48CC;\n"
"}"));
        gridLayout_9 = new QGridLayout(w_control);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(0);
        gridLayout_9->setVerticalSpacing(5);
        gridLayout_9->setContentsMargins(0, 0, 0, 5);
        widget_11 = new QWidget(w_control);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(0, 60));
        widget_11->setMaximumSize(QSize(16777215, 60));
        widget_11->setStyleSheet(QStringLiteral(""));
        gridLayout_10 = new QGridLayout(widget_11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(15);
        gridLayout_10->setContentsMargins(20, 0, -1, 0);
        w_upload = new CxDropPanel(widget_11);
        w_upload->setObjectName(QStringLiteral("w_upload"));
        w_upload->setMinimumSize(QSize(150, 60));
        w_upload->setMaximumSize(QSize(150, 60));
        w_upload->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#202D64;\n"
"}"));
        gridLayout_6 = new QGridLayout(w_upload);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(w_upload);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(w_upload);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_10->addWidget(w_upload, 0, 1, 1, 1);

        tb_merge = new QToolButton(widget_11);
        tb_merge->setObjectName(QStringLiteral("tb_merge"));
        tb_merge->setMinimumSize(QSize(200, 50));
        tb_merge->setMaximumSize(QSize(220, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font1.setPointSize(14);
        tb_merge->setFont(font1);
        tb_merge->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#fff200;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"background:#ffd96a;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icon/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_merge->setIcon(icon1);
        tb_merge->setIconSize(QSize(40, 40));
        tb_merge->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_10->addWidget(tb_merge, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 2, 1, 1);

        widget_10 = new QWidget(widget_11);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 50));
        widget_10->setMaximumSize(QSize(16777215, 50));
        widget_10->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c3c3c3;\n"
"border:1px solid #c3c3c3;\n"
"border-radius:15px;\n"
"}"));
        gridLayout_8 = new QGridLayout(widget_10);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(0);
        gridLayout_8->setContentsMargins(8, 5, 8, 5);
        tb_upload = new QToolButton(widget_10);
        tb_upload->setObjectName(QStringLiteral("tb_upload"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tb_upload->sizePolicy().hasHeightForWidth());
        tb_upload->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        tb_upload->setFont(font2);
        tb_upload->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(tb_upload, 0, 0, 1, 1);

        tb_upload_menu = new QToolButton(widget_10);
        tb_upload_menu->setObjectName(QStringLiteral("tb_upload_menu"));
        sizePolicy2.setHeightForWidth(tb_upload_menu->sizePolicy().hasHeightForWidth());
        tb_upload_menu->setSizePolicy(sizePolicy2);
        tb_upload_menu->setMinimumSize(QSize(20, 0));
        tb_upload_menu->setMaximumSize(QSize(20, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        tb_upload_menu->setFont(font3);
        tb_upload_menu->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"color:#fff200;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icon/drop-down-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_upload_menu->setIcon(icon2);
        tb_upload_menu->setIconSize(QSize(13, 13));

        gridLayout_8->addWidget(tb_upload_menu, 0, 1, 1, 1);


        gridLayout_10->addWidget(widget_10, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_11, 1, 0, 1, 1);

        w_seek = new QWidget(w_control);
        w_seek->setObjectName(QStringLiteral("w_seek"));
        w_seek->setMinimumSize(QSize(0, 90));
        w_seek->setMaximumSize(QSize(16777215, 90));
        w_seek->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#C5C8EF;\n"
"}"));
        gridLayout_5 = new QGridLayout(w_seek);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lbl_main_seek = new CxTrimBar(w_seek);
        lbl_main_seek->setObjectName(QStringLiteral("lbl_main_seek"));

        gridLayout_5->addWidget(lbl_main_seek, 0, 0, 1, 1);


        gridLayout_9->addWidget(w_seek, 0, 0, 1, 1);


        gridLayout_2->addWidget(w_control, 1, 0, 1, 1);


        gridLayout->addWidget(w_main, 1, 0, 1, 1);

        w_top = new QWidget(centralwidget);
        w_top->setObjectName(QStringLiteral("w_top"));
        w_top->setMinimumSize(QSize(0, 40));
        w_top->setMaximumSize(QSize(16777215, 40));
        gridLayout_7 = new QGridLayout(w_top);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(-1, 0, -1, 0);
        label_4 = new QLabel(w_top);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(40, 40));
        label_4->setMaximumSize(QSize(11111, 40));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:white;\n"
"}"));

        gridLayout_7->addWidget(label_4, 0, 1, 1, 1);

        label_3 = new QLabel(w_top);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(30, 30));
        label_3->setMaximumSize(QSize(30, 30));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/icon/icon.png")));
        label_3->setScaledContents(true);

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        tb_minimize = new QToolButton(w_top);
        tb_minimize->setObjectName(QStringLiteral("tb_minimize"));
        tb_minimize->setMinimumSize(QSize(30, 30));
        tb_minimize->setMaximumSize(QSize(30, 30));
        tb_minimize->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icon/minimize-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_minimize->setIcon(icon3);
        tb_minimize->setIconSize(QSize(30, 30));

        gridLayout_7->addWidget(tb_minimize, 0, 3, 1, 1);

        tb_close = new QToolButton(w_top);
        tb_close->setObjectName(QStringLiteral("tb_close"));
        tb_close->setMinimumSize(QSize(30, 30));
        tb_close->setMaximumSize(QSize(30, 30));
        tb_close->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icon/close-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_close->setIcon(icon4);
        tb_close->setIconSize(QSize(30, 30));

        gridLayout_7->addWidget(tb_close, 0, 5, 1, 1);

        tb_restore = new QToolButton(w_top);
        tb_restore->setObjectName(QStringLiteral("tb_restore"));
        tb_restore->setMinimumSize(QSize(30, 30));
        tb_restore->setMaximumSize(QSize(30, 30));
        tb_restore->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icon/restore-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/res/icon/maximize-window-256.png"), QSize(), QIcon::Normal, QIcon::On);
        tb_restore->setIcon(icon5);
        tb_restore->setIconSize(QSize(30, 30));
        tb_restore->setCheckable(true);
        tb_restore->setChecked(true);

        gridLayout_7->addWidget(tb_restore, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(w_top, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Merge MP4", 0));
        lbl_screen->setText(QString());
        label->setText(QApplication::translate("MainWindow", "FILE HERE", 0));
        label_2->setText(QApplication::translate("MainWindow", "OR DROP", 0));
        tb_merge->setText(QApplication::translate("MainWindow", "CONNECT MP4", 0));
        tb_upload->setText(QApplication::translate("MainWindow", "UPLOAD", 0));
        tb_upload_menu->setText(QString());
        lbl_main_seek->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "  Merge MP4   ", 0));
        label_3->setText(QString());
        tb_minimize->setText(QApplication::translate("MainWindow", "...", 0));
        tb_close->setText(QApplication::translate("MainWindow", "...", 0));
        tb_restore->setText(QApplication::translate("MainWindow", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
