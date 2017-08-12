/********************************************************************************
** Form generated from reading UI file 'threaddialog.ui'
**
** Created: Sat Aug 12 09:39:25 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADDIALOG_H
#define UI_THREADDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_threadDialog
{
public:
    QPushButton *start;
    QPushButton *stop;
    QPushButton *exit;

    void setupUi(QDialog *threadDialog)
    {
        if (threadDialog->objectName().isEmpty())
            threadDialog->setObjectName(QString::fromUtf8("threadDialog"));
        threadDialog->resize(767, 443);
        start = new QPushButton(threadDialog);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(140, 190, 98, 27));
        stop = new QPushButton(threadDialog);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(140, 250, 98, 27));
        exit = new QPushButton(threadDialog);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(140, 320, 98, 27));

        retranslateUi(threadDialog);

        QMetaObject::connectSlotsByName(threadDialog);
    } // setupUi

    void retranslateUi(QDialog *threadDialog)
    {
        threadDialog->setWindowTitle(QApplication::translate("threadDialog", "threadDialog", 0, QApplication::UnicodeUTF8));
        start->setText(QApplication::translate("threadDialog", "start", 0, QApplication::UnicodeUTF8));
        stop->setText(QApplication::translate("threadDialog", "stop", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("threadDialog", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class threadDialog: public Ui_threadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADDIALOG_H
