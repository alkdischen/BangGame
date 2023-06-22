/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn_player;
    QPushButton *btn_ai;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(728, 544);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(152, 169, 227, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(66, 76, 160, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(123, 128, 160, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush4(QColor(86, 88, 105, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        Widget->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        Widget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ChainsawMan (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        btn_player = new QPushButton(Widget);
        btn_player->setObjectName(QString::fromUtf8("btn_player"));
        btn_player->setGeometry(QRect(510, 310, 101, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_player->sizePolicy().hasHeightForWidth());
        btn_player->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\350\213\271\346\226\271-\347\256\200"));
        font1.setPointSize(10);
        btn_player->setFont(font1);
        btn_player->setIconSize(QSize(20, 20));
        btn_ai = new QPushButton(Widget);
        btn_ai->setObjectName(QString::fromUtf8("btn_ai"));
        btn_ai->setGeometry(QRect(510, 410, 101, 61));
        sizePolicy.setHeightForWidth(btn_ai->sizePolicy().hasHeightForWidth());
        btn_ai->setSizePolicy(sizePolicy);
        btn_ai->setFont(font1);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-70, 100, 851, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font2.setPointSize(20);
        label->setFont(font2);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-60, 220, 851, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Gobang_by_livingsu", nullptr));
        btn_player->setText(QCoreApplication::translate("Widget", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        btn_ai->setText(QCoreApplication::translate("Widget", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\272\224\345\255\220\346\243\213\345\257\271\345\274\210\347\263\273\347\273\237 - \347\254\2548\347\273\204", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Designed by Group 8\357\274\214 for CS1501", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
