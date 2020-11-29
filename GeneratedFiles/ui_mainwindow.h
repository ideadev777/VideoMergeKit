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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "cxmedialist.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *w_top;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QLabel *label_3;
    QToolButton *tb_minimize;
    QToolButton *tb_close;
    QToolButton *tb_restore;
    QSpacerItem *horizontalSpacer_2;
    QWidget *w_main;
    QGridLayout *gridLayout_2;
    QWidget *w_left;
    QGridLayout *gridLayout_4;
    CxMediaList *listWidget;
    QWidget *widget;
    QGridLayout *gridLayout_8;
    QToolButton *tb_upload;
    QToolButton *tb_remove;
    QWidget *w_right;
    QGridLayout *gridLayout_3;
    QWidget *w_right_top;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit;
    QWidget *w_right_bottom;
    QGridLayout *gridLayout_6;
    QToolButton *tb_start;
    QToolButton *tb_save_txt;
    QToolButton *tb_save_pdf;
    QSpacerItem *horizontalSpacer;

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
        centralwidget->setStyleSheet(QStringLiteral("background:#fff200;"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        w_top = new QWidget(centralwidget);
        w_top->setObjectName(QStringLiteral("w_top"));
        w_top->setMinimumSize(QSize(0, 50));
        w_top->setMaximumSize(QSize(16777215, 50));
        w_top->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:black;\n"
"}"));
        gridLayout_7 = new QGridLayout(w_top);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(-1, 0, -1, 0);
        label_4 = new QLabel(w_top);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(40, 40));
        label_4->setMaximumSize(QSize(11111, 40));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
        font.setPointSize(18);
        label_4->setFont(font);
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
        tb_minimize->setMinimumSize(QSize(40, 40));
        tb_minimize->setMaximumSize(QSize(40, 40));
        tb_minimize->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icon/minimize-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_minimize->setIcon(icon1);
        tb_minimize->setIconSize(QSize(40, 40));

        gridLayout_7->addWidget(tb_minimize, 0, 3, 1, 1);

        tb_close = new QToolButton(w_top);
        tb_close->setObjectName(QStringLiteral("tb_close"));
        tb_close->setMinimumSize(QSize(40, 40));
        tb_close->setMaximumSize(QSize(40, 40));
        tb_close->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icon/close-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_close->setIcon(icon2);
        tb_close->setIconSize(QSize(40, 40));

        gridLayout_7->addWidget(tb_close, 0, 5, 1, 1);

        tb_restore = new QToolButton(w_top);
        tb_restore->setObjectName(QStringLiteral("tb_restore"));
        tb_restore->setMinimumSize(QSize(40, 40));
        tb_restore->setMaximumSize(QSize(40, 40));
        tb_restore->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icon/restore-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/res/icon/maximize-window-256.png"), QSize(), QIcon::Normal, QIcon::On);
        tb_restore->setIcon(icon3);
        tb_restore->setIconSize(QSize(40, 40));
        tb_restore->setCheckable(true);
        tb_restore->setChecked(true);

        gridLayout_7->addWidget(tb_restore, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(w_top, 0, 0, 1, 1);

        w_main = new QWidget(centralwidget);
        w_main->setObjectName(QStringLiteral("w_main"));
        w_main->setMinimumSize(QSize(0, 0));
        w_main->setMaximumSize(QSize(16777215, 16777215));
        w_main->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#434343;\n"
"}"));
        gridLayout_2 = new QGridLayout(w_main);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        w_left = new QWidget(w_main);
        w_left->setObjectName(QStringLiteral("w_left"));
        w_left->setMinimumSize(QSize(400, 0));
        w_left->setMaximumSize(QSize(400, 16777215));
        gridLayout_4 = new QGridLayout(w_left);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        listWidget = new CxMediaList(w_left);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_4->addWidget(listWidget, 0, 0, 1, 1);

        widget = new QWidget(w_left);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        gridLayout_8 = new QGridLayout(widget);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tb_upload = new QToolButton(widget);
        tb_upload->setObjectName(QStringLiteral("tb_upload"));
        tb_upload->setMinimumSize(QSize(100, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Impact"));
        font1.setPointSize(16);
        tb_upload->setFont(font1);
        tb_upload->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:white;\n"
"background:#313131;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"color:white;\n"
"background:#575757;\n"
"}"));

        gridLayout_8->addWidget(tb_upload, 0, 0, 1, 1);

        tb_remove = new QToolButton(widget);
        tb_remove->setObjectName(QStringLiteral("tb_remove"));
        tb_remove->setMinimumSize(QSize(100, 40));
        tb_remove->setFont(font1);
        tb_remove->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:white;\n"
"background:#313131;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"color:white;\n"
"background:#575757;\n"
"}"));

        gridLayout_8->addWidget(tb_remove, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget, 1, 0, 1, 1);


        gridLayout_2->addWidget(w_left, 0, 0, 1, 1);

        w_right = new QWidget(w_main);
        w_right->setObjectName(QStringLiteral("w_right"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(w_right->sizePolicy().hasHeightForWidth());
        w_right->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(w_right);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        w_right_top = new QWidget(w_right);
        w_right_top->setObjectName(QStringLiteral("w_right_top"));
        gridLayout_5 = new QGridLayout(w_right_top);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 0, -1, 0);
        textEdit = new QTextEdit(w_right_top);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_5->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_3->addWidget(w_right_top, 0, 0, 1, 1);

        w_right_bottom = new QWidget(w_right);
        w_right_bottom->setObjectName(QStringLiteral("w_right_bottom"));
        w_right_bottom->setMinimumSize(QSize(0, 80));
        w_right_bottom->setMaximumSize(QSize(16777215, 80));
        gridLayout_6 = new QGridLayout(w_right_bottom);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tb_start = new QToolButton(w_right_bottom);
        tb_start->setObjectName(QStringLiteral("tb_start"));
        tb_start->setMinimumSize(QSize(100, 40));
        tb_start->setFont(font1);
        tb_start->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:white;\n"
"background:#313131;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"color:white;\n"
"background:#575757;\n"
"}"));

        gridLayout_6->addWidget(tb_start, 0, 0, 1, 1);

        tb_save_txt = new QToolButton(w_right_bottom);
        tb_save_txt->setObjectName(QStringLiteral("tb_save_txt"));
        tb_save_txt->setMinimumSize(QSize(130, 40));
        tb_save_txt->setFont(font1);
        tb_save_txt->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:white;\n"
"background:#313131;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"color:white;\n"
"background:#575757;\n"
"}"));

        gridLayout_6->addWidget(tb_save_txt, 0, 2, 1, 1);

        tb_save_pdf = new QToolButton(w_right_bottom);
        tb_save_pdf->setObjectName(QStringLiteral("tb_save_pdf"));
        tb_save_pdf->setMinimumSize(QSize(130, 40));
        tb_save_pdf->setFont(font1);
        tb_save_pdf->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:white;\n"
"background:#313131;\n"
"}\n"
"\n"
"QToolButton:Hover\n"
"{\n"
"color:white;\n"
"background:#575757;\n"
"}"));

        gridLayout_6->addWidget(tb_save_pdf, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_3->addWidget(w_right_bottom, 1, 0, 1, 1);


        gridLayout_2->addWidget(w_right, 0, 1, 1, 1);


        gridLayout->addWidget(w_main, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Merge MP4", 0));
        label_4->setText(QApplication::translate("MainWindow", "  Text Extractor   ", 0));
        label_3->setText(QString());
        tb_minimize->setText(QApplication::translate("MainWindow", "...", 0));
        tb_close->setText(QApplication::translate("MainWindow", "...", 0));
        tb_restore->setText(QApplication::translate("MainWindow", "...", 0));
        tb_upload->setText(QApplication::translate("MainWindow", "UPLOAD", 0));
        tb_remove->setText(QApplication::translate("MainWindow", "REMOVE", 0));
        tb_start->setText(QApplication::translate("MainWindow", "START", 0));
        tb_save_txt->setText(QApplication::translate("MainWindow", "SAVE AS TXT", 0));
        tb_save_pdf->setText(QApplication::translate("MainWindow", "SAVE AS PDF", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
