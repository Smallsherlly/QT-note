/********************************************************************************
** Form generated from reading UI file 'mydraw.ui'
**
** Created: Thu Aug 10 20:13:50 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDRAW_H
#define UI_MYDRAW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myDraw
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myDraw)
    {
        if (myDraw->objectName().isEmpty())
            myDraw->setObjectName(QString::fromUtf8("myDraw"));
        myDraw->resize(933, 608);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(myDraw->sizePolicy().hasHeightForWidth());
        myDraw->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(myDraw);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        myDraw->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myDraw);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 933, 26));
        myDraw->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myDraw);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        myDraw->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myDraw);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myDraw->setStatusBar(statusBar);

        retranslateUi(myDraw);

        QMetaObject::connectSlotsByName(myDraw);
    } // setupUi

    void retranslateUi(QMainWindow *myDraw)
    {
        myDraw->setWindowTitle(QApplication::translate("myDraw", "myDraw", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("myDraw", "10", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("myDraw", "\350\216\267\345\245\226\350\200\205", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myDraw", "\351\232\217\346\234\272\344\270\200\344\270\213", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDraw", "\344\270\212\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDraw", "\344\270\213\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myDraw", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDraw: public Ui_myDraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDRAW_H
