/********************************************************************************
** Form generated from reading UI file 'mykeyboardevent.ui'
**
** Created: Thu Aug 10 11:51:44 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYKEYBOARDEVENT_H
#define UI_MYKEYBOARDEVENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_myKeyBoardEvent
{
public:
    QLabel *label;

    void setupUi(QDialog *myKeyBoardEvent)
    {
        if (myKeyBoardEvent->objectName().isEmpty())
            myKeyBoardEvent->setObjectName(QString::fromUtf8("myKeyBoardEvent"));
        myKeyBoardEvent->resize(558, 442);
        label = new QLabel(myKeyBoardEvent);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 90, 66, 17));
        label->setFrameShape(QFrame::WinPanel);

        retranslateUi(myKeyBoardEvent);

        QMetaObject::connectSlotsByName(myKeyBoardEvent);
    } // setupUi

    void retranslateUi(QDialog *myKeyBoardEvent)
    {
        myKeyBoardEvent->setWindowTitle(QApplication::translate("myKeyBoardEvent", "myKeyBoardEvent", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myKeyBoardEvent", "Snake", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myKeyBoardEvent: public Ui_myKeyBoardEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYKEYBOARDEVENT_H
