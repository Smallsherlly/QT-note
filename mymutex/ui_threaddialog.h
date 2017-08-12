/********************************************************************************
** Form generated from reading UI file 'threaddialog.ui'
**
** Created: Sat Aug 12 10:40:27 2017
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreadDialog
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ThreadDialog)
    {
        if (ThreadDialog->objectName().isEmpty())
            ThreadDialog->setObjectName(QString::fromUtf8("ThreadDialog"));
        ThreadDialog->resize(400, 300);
        centralWidget = new QWidget(ThreadDialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 70, 308, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        ThreadDialog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ThreadDialog);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        ThreadDialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ThreadDialog);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ThreadDialog->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ThreadDialog);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ThreadDialog->setStatusBar(statusBar);

        retranslateUi(ThreadDialog);

        QMetaObject::connectSlotsByName(ThreadDialog);
    } // setupUi

    void retranslateUi(QMainWindow *ThreadDialog)
    {
        ThreadDialog->setWindowTitle(QApplication::translate("ThreadDialog", "ThreadDialog", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ThreadDialog", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ThreadDialog", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ThreadDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ThreadDialog: public Ui_ThreadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADDIALOG_H
