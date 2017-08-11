/********************************************************************************
** Form generated from reading UI file 'mytimerevent.ui'
**
** Created: Wed Aug 9 17:21:12 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIMEREVENT_H
#define UI_MYTIMEREVENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTimerEvent
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myTimerEvent)
    {
        if (myTimerEvent->objectName().isEmpty())
            myTimerEvent->setObjectName(QString::fromUtf8("myTimerEvent"));
        myTimerEvent->resize(400, 300);
        centralWidget = new QWidget(myTimerEvent);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 30, 113, 27));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 100, 113, 27));
        myTimerEvent->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myTimerEvent);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        myTimerEvent->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myTimerEvent);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myTimerEvent->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myTimerEvent);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myTimerEvent->setStatusBar(statusBar);

        retranslateUi(myTimerEvent);

        QMetaObject::connectSlotsByName(myTimerEvent);
    } // setupUi

    void retranslateUi(QMainWindow *myTimerEvent)
    {
        myTimerEvent->setWindowTitle(QApplication::translate("myTimerEvent", "myTimerEvent", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myTimerEvent: public Ui_myTimerEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMEREVENT_H
