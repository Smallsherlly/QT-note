/********************************************************************************
** Form generated from reading UI file 'mymouseevent.ui'
**
** Created: Thu Aug 10 10:25:04 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMOUSEEVENT_H
#define UI_MYMOUSEEVENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMouseEvent
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myMouseEvent)
    {
        if (myMouseEvent->objectName().isEmpty())
            myMouseEvent->setObjectName(QString::fromUtf8("myMouseEvent"));
        myMouseEvent->resize(955, 679);
        action = new QAction(myMouseEvent);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(myMouseEvent);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(myMouseEvent);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralWidget = new QWidget(myMouseEvent);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 130, 121, 81));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 130, 151, 81));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 400, 171, 61));
        myMouseEvent->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myMouseEvent);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 955, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        myMouseEvent->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myMouseEvent);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myMouseEvent->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myMouseEvent);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myMouseEvent->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(myMouseEvent);

        QMetaObject::connectSlotsByName(myMouseEvent);
    } // setupUi

    void retranslateUi(QMainWindow *myMouseEvent)
    {
        myMouseEvent->setWindowTitle(QApplication::translate("myMouseEvent", "myMouseEvent", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("myMouseEvent", "\346\226\260\345\273\272\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("myMouseEvent", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("myMouseEvent", "\345\217\246\345\255\230\344\270\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myMouseEvent", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("myMouseEvent", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("myMouseEvent", "TextLabel", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("myMouseEvent", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myMouseEvent: public Ui_myMouseEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMOUSEEVENT_H
