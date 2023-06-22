/********************************************************************************
** Form generated from reading UI file 'gamewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIDGET_H
#define UI_GAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameWidget
{
public:
    QPushButton *btn_return;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcd_write;
    QLabel *lb_white_position;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcd_black;
    QLabel *lb_black_position;
    QLabel *lb_timeuse;
    QLabel *lb_nodeNum;
    QLabel *lb_eval;
    QPushButton *btn_restart;
    QPushButton *btn_regret;

    void setupUi(QWidget *gameWidget)
    {
        if (gameWidget->objectName().isEmpty())
            gameWidget->setObjectName(QString::fromUtf8("gameWidget"));
        gameWidget->resize(728, 544);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ChainsawMan (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        gameWidget->setWindowIcon(icon);
        btn_return = new QPushButton(gameWidget);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(580, 420, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        btn_return->setFont(font);
        layoutWidget = new QWidget(gameWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(580, 10, 91, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        lcd_write = new QLCDNumber(layoutWidget);
        lcd_write->setObjectName(QString::fromUtf8("lcd_write"));

        verticalLayout->addWidget(lcd_write);

        lb_white_position = new QLabel(layoutWidget);
        lb_white_position->setObjectName(QString::fromUtf8("lb_white_position"));

        verticalLayout->addWidget(lb_white_position);

        layoutWidget1 = new QWidget(gameWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(580, 160, 91, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\350\213\271\346\226\271-\347\271\201"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);

        lcd_black = new QLCDNumber(layoutWidget1);
        lcd_black->setObjectName(QString::fromUtf8("lcd_black"));

        verticalLayout_2->addWidget(lcd_black);

        lb_black_position = new QLabel(layoutWidget1);
        lb_black_position->setObjectName(QString::fromUtf8("lb_black_position"));

        verticalLayout_2->addWidget(lb_black_position);

        lb_timeuse = new QLabel(gameWidget);
        lb_timeuse->setObjectName(QString::fromUtf8("lb_timeuse"));
        lb_timeuse->setGeometry(QRect(350, 469, 221, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        lb_timeuse->setFont(font3);
        lb_nodeNum = new QLabel(gameWidget);
        lb_nodeNum->setObjectName(QString::fromUtf8("lb_nodeNum"));
        lb_nodeNum->setGeometry(QRect(10, 470, 171, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font4.setPointSize(11);
        lb_nodeNum->setFont(font4);
        lb_eval = new QLabel(gameWidget);
        lb_eval->setObjectName(QString::fromUtf8("lb_eval"));
        lb_eval->setGeometry(QRect(180, 469, 171, 51));
        lb_eval->setFont(font4);
        btn_restart = new QPushButton(gameWidget);
        btn_restart->setObjectName(QString::fromUtf8("btn_restart"));
        btn_restart->setGeometry(QRect(580, 360, 111, 51));
        btn_restart->setFont(font);
        btn_regret = new QPushButton(gameWidget);
        btn_regret->setObjectName(QString::fromUtf8("btn_regret"));
        btn_regret->setGeometry(QRect(580, 480, 111, 51));
        btn_regret->setFont(font);

        retranslateUi(gameWidget);

        QMetaObject::connectSlotsByName(gameWidget);
    } // setupUi

    void retranslateUi(QWidget *gameWidget)
    {
        gameWidget->setWindowTitle(QCoreApplication::translate("gameWidget", "Gobang_by_livingsu", nullptr));
        btn_return->setText(QCoreApplication::translate("gameWidget", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("gameWidget", "  \347\231\275\346\243\213", nullptr));
        lb_white_position->setText(QString());
        label_2->setText(QCoreApplication::translate("gameWidget", "   \351\273\221\346\243\213 ", nullptr));
        lb_black_position->setText(QString());
        lb_timeuse->setText(QCoreApplication::translate("gameWidget", "AI\350\200\227\346\227\266\357\274\232", nullptr));
        lb_nodeNum->setText(QCoreApplication::translate("gameWidget", "AI\346\220\234\347\264\242\346\267\261\345\272\246\357\274\232", nullptr));
        lb_eval->setText(QCoreApplication::translate("gameWidget", "AI\350\257\204\344\274\260\357\274\232", nullptr));
        btn_restart->setText(QCoreApplication::translate("gameWidget", "\351\207\215\346\226\260\345\274\200\345\247\213\346\255\244\345\261\200", nullptr));
        btn_regret->setText(QCoreApplication::translate("gameWidget", "\344\270\215\350\246\201\346\202\224\346\243\213\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameWidget: public Ui_gameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIDGET_H
