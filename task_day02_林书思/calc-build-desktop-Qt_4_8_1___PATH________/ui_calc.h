/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created: Wed Aug 9 23:23:43 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calc
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pb6;
    QPushButton *pb_a;
    QPushButton *pb5;
    QPushButton *pb9;
    QPushButton *pb_e;
    QPushButton *pb2;
    QPushButton *pb7;
    QPushButton *pb1;
    QPushButton *pb8;
    QPushButton *pb4;
    QPushButton *pb3;
    QPushButton *pb0;
    QPushButton *pb_s;
    QPushButton *pb_p;
    QPushButton *pb_d;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calc)
    {
        if (calc->objectName().isEmpty())
            calc->setObjectName(QString::fromUtf8("calc"));
        calc->resize(374, 407);
        centralWidget = new QWidget(calc);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 291, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 100, 98, 27));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 130, 321, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pb6 = new QPushButton(gridLayoutWidget);
        pb6->setObjectName(QString::fromUtf8("pb6"));

        gridLayout->addWidget(pb6, 1, 2, 1, 1);

        pb_a = new QPushButton(gridLayoutWidget);
        pb_a->setObjectName(QString::fromUtf8("pb_a"));

        gridLayout->addWidget(pb_a, 4, 0, 1, 1);

        pb5 = new QPushButton(gridLayoutWidget);
        pb5->setObjectName(QString::fromUtf8("pb5"));

        gridLayout->addWidget(pb5, 1, 1, 1, 1);

        pb9 = new QPushButton(gridLayoutWidget);
        pb9->setObjectName(QString::fromUtf8("pb9"));

        gridLayout->addWidget(pb9, 3, 2, 1, 1);

        pb_e = new QPushButton(gridLayoutWidget);
        pb_e->setObjectName(QString::fromUtf8("pb_e"));

        gridLayout->addWidget(pb_e, 4, 2, 1, 1);

        pb2 = new QPushButton(gridLayoutWidget);
        pb2->setObjectName(QString::fromUtf8("pb2"));

        gridLayout->addWidget(pb2, 0, 1, 1, 1);

        pb7 = new QPushButton(gridLayoutWidget);
        pb7->setObjectName(QString::fromUtf8("pb7"));

        gridLayout->addWidget(pb7, 3, 0, 1, 1);

        pb1 = new QPushButton(gridLayoutWidget);
        pb1->setObjectName(QString::fromUtf8("pb1"));

        gridLayout->addWidget(pb1, 0, 0, 1, 1);

        pb8 = new QPushButton(gridLayoutWidget);
        pb8->setObjectName(QString::fromUtf8("pb8"));

        gridLayout->addWidget(pb8, 3, 1, 1, 1);

        pb4 = new QPushButton(gridLayoutWidget);
        pb4->setObjectName(QString::fromUtf8("pb4"));

        gridLayout->addWidget(pb4, 1, 0, 1, 1);

        pb3 = new QPushButton(gridLayoutWidget);
        pb3->setObjectName(QString::fromUtf8("pb3"));

        gridLayout->addWidget(pb3, 0, 2, 1, 1);

        pb0 = new QPushButton(gridLayoutWidget);
        pb0->setObjectName(QString::fromUtf8("pb0"));

        gridLayout->addWidget(pb0, 4, 1, 1, 1);

        pb_s = new QPushButton(gridLayoutWidget);
        pb_s->setObjectName(QString::fromUtf8("pb_s"));

        gridLayout->addWidget(pb_s, 5, 0, 1, 1);

        pb_p = new QPushButton(gridLayoutWidget);
        pb_p->setObjectName(QString::fromUtf8("pb_p"));

        gridLayout->addWidget(pb_p, 5, 1, 1, 1);

        pb_d = new QPushButton(gridLayoutWidget);
        pb_d->setObjectName(QString::fromUtf8("pb_d"));

        gridLayout->addWidget(pb_d, 5, 2, 1, 1);

        calc->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calc);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 374, 26));
        calc->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calc);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        calc->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calc);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calc->setStatusBar(statusBar);

        retranslateUi(calc);

        QMetaObject::connectSlotsByName(calc);
    } // setupUi

    void retranslateUi(QMainWindow *calc)
    {
        calc->setWindowTitle(QApplication::translate("calc", "calc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("calc", "\346\270\205\351\233\266", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("calc", "6", 0, QApplication::UnicodeUTF8));
        pb_a->setText(QApplication::translate("calc", "+", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("calc", "5", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("calc", "9", 0, QApplication::UnicodeUTF8));
        pb_e->setText(QApplication::translate("calc", "=", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("calc", "2", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("calc", "7", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("calc", "1", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("calc", "8", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("calc", "4", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("calc", "3", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("calc", "0", 0, QApplication::UnicodeUTF8));
        pb_s->setText(QApplication::translate("calc", "-", 0, QApplication::UnicodeUTF8));
        pb_p->setText(QApplication::translate("calc", "*", 0, QApplication::UnicodeUTF8));
        pb_d->setText(QApplication::translate("calc", "/", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calc: public Ui_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
