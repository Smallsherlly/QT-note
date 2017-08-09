/********************************************************************************
** Form generated from reading UI file 'mytimer.ui'
**
** Created: Wed Aug 9 16:51:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIMER_H
#define UI_MYTIMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTimer
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *myTimer)
    {
        if (myTimer->objectName().isEmpty())
            myTimer->setObjectName(QString::fromUtf8("myTimer"));
        myTimer->resize(400, 300);
        lineEdit = new QLineEdit(myTimer);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 60, 113, 27));
        lineEdit_2 = new QLineEdit(myTimer);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 140, 113, 27));

        retranslateUi(myTimer);

        QMetaObject::connectSlotsByName(myTimer);
    } // setupUi

    void retranslateUi(QWidget *myTimer)
    {
        myTimer->setWindowTitle(QApplication::translate("myTimer", "myTimer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myTimer: public Ui_myTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMER_H
