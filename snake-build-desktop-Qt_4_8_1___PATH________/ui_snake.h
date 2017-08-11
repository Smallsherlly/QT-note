/********************************************************************************
** Form generated from reading UI file 'snake.ui'
**
** Created: Fri Aug 11 09:29:29 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKE_H
#define UI_SNAKE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_snake
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *m_score;
    QLabel *m_map;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_start;
    QPushButton *m_restart;
    QPushButton *m_exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *snake)
    {
        if (snake->objectName().isEmpty())
            snake->setObjectName(QString::fromUtf8("snake"));
        snake->resize(808, 570);
        centralWidget = new QWidget(snake);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_score = new QLineEdit(centralWidget);
        m_score->setObjectName(QString::fromUtf8("m_score"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_score->sizePolicy().hasHeightForWidth());
        m_score->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(m_score);


        verticalLayout->addLayout(horizontalLayout_2);

        m_map = new QLabel(centralWidget);
        m_map->setObjectName(QString::fromUtf8("m_map"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_map->sizePolicy().hasHeightForWidth());
        m_map->setSizePolicy(sizePolicy1);
        m_map->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(m_map);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_start = new QPushButton(centralWidget);
        m_start->setObjectName(QString::fromUtf8("m_start"));

        horizontalLayout->addWidget(m_start);

        m_restart = new QPushButton(centralWidget);
        m_restart->setObjectName(QString::fromUtf8("m_restart"));

        horizontalLayout->addWidget(m_restart);

        m_exit = new QPushButton(centralWidget);
        m_exit->setObjectName(QString::fromUtf8("m_exit"));

        horizontalLayout->addWidget(m_exit);


        verticalLayout->addLayout(horizontalLayout);

        snake->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(snake);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 808, 26));
        snake->setMenuBar(menuBar);
        mainToolBar = new QToolBar(snake);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        snake->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(snake);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        snake->setStatusBar(statusBar);

        retranslateUi(snake);

        QMetaObject::connectSlotsByName(snake);
    } // setupUi

    void retranslateUi(QMainWindow *snake)
    {
        snake->setWindowTitle(QApplication::translate("snake", "snake", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("snake", "Score", 0, QApplication::UnicodeUTF8));
        m_map->setText(QString());
        m_start->setText(QApplication::translate("snake", "Start", 0, QApplication::UnicodeUTF8));
        m_restart->setText(QApplication::translate("snake", "Restart", 0, QApplication::UnicodeUTF8));
        m_exit->setText(QApplication::translate("snake", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class snake: public Ui_snake {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKE_H
