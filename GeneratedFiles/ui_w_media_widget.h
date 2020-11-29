/********************************************************************************
** Form generated from reading UI file 'w_media_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_MEDIA_WIDGET_H
#define UI_W_MEDIA_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Media
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QToolButton *tb_langcode;
    QLabel *lbl_title;

    void setupUi(QWidget *Form_Media)
    {
        if (Form_Media->objectName().isEmpty())
            Form_Media->setObjectName(QStringLiteral("Form_Media"));
        Form_Media->resize(375, 48);
        gridLayout = new QGridLayout(Form_Media);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(Form_Media);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tb_langcode = new QToolButton(widget);
        tb_langcode->setObjectName(QStringLiteral("tb_langcode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tb_langcode->sizePolicy().hasHeightForWidth());
        tb_langcode->setSizePolicy(sizePolicy);
        tb_langcode->setMinimumSize(QSize(40, 0));
        tb_langcode->setMaximumSize(QSize(40, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
        font.setPointSize(22);
        tb_langcode->setFont(font);
        tb_langcode->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:#fff200;\n"
"background:green;\n"
"}\n"
"QToolButton:Checked\n"
"{\n"
"color:blue;\n"
"background:green;\n"
"}"));
        tb_langcode->setCheckable(true);

        gridLayout_2->addWidget(tb_langcode, 0, 0, 1, 1);

        lbl_title = new QLabel(widget);
        lbl_title->setObjectName(QStringLiteral("lbl_title"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        lbl_title->setFont(font1);
        lbl_title->setStyleSheet(QLatin1String("background:#a0a0a0;\n"
"color:white;"));

        gridLayout_2->addWidget(lbl_title, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Form_Media);

        QMetaObject::connectSlotsByName(Form_Media);
    } // setupUi

    void retranslateUi(QWidget *Form_Media)
    {
        Form_Media->setWindowTitle(QApplication::translate("Form_Media", "Form", 0));
        tb_langcode->setText(QApplication::translate("Form_Media", "EN", 0));
        lbl_title->setText(QApplication::translate("Form_Media", "   Native American Speech.mp3", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_Media: public Ui_Form_Media {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_MEDIA_WIDGET_H
