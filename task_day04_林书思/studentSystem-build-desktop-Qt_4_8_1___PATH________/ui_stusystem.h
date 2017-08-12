/********************************************************************************
** Form generated from reading UI file 'stusystem.ui'
**
** Created: Fri Aug 11 17:19:55 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUSYSTEM_H
#define UI_STUSYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stuSystem
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *exit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *order;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *m_id;
    QLabel *name;
    QLabel *id;
    QLineEdit *m_name;
    QLabel *score;
    QLineEdit *m_score;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *insert;
    QPushButton *select;
    QPushButton *alter;
    QPushButton *delete_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *stuSystem)
    {
        if (stuSystem->objectName().isEmpty())
            stuSystem->setObjectName(QString::fromUtf8("stuSystem"));
        stuSystem->resize(819, 859);
        centralWidget = new QWidget(stuSystem);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));

        horizontalLayout_2->addWidget(exit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        order = new QPushButton(centralWidget);
        order->setObjectName(QString::fromUtf8("order"));

        horizontalLayout->addWidget(order);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_id = new QLineEdit(centralWidget);
        m_id->setObjectName(QString::fromUtf8("m_id"));

        gridLayout_2->addWidget(m_id, 0, 1, 1, 1);

        name = new QLabel(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout_2->addWidget(name, 1, 0, 1, 1);

        id = new QLabel(centralWidget);
        id->setObjectName(QString::fromUtf8("id"));

        gridLayout_2->addWidget(id, 0, 0, 1, 1);

        m_name = new QLineEdit(centralWidget);
        m_name->setObjectName(QString::fromUtf8("m_name"));

        gridLayout_2->addWidget(m_name, 1, 1, 1, 1);

        score = new QLabel(centralWidget);
        score->setObjectName(QString::fromUtf8("score"));

        gridLayout_2->addWidget(score, 2, 0, 1, 1);

        m_score = new QLineEdit(centralWidget);
        m_score->setObjectName(QString::fromUtf8("m_score"));

        gridLayout_2->addWidget(m_score, 2, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        insert = new QPushButton(centralWidget);
        insert->setObjectName(QString::fromUtf8("insert"));

        gridLayout->addWidget(insert, 0, 0, 1, 1);

        select = new QPushButton(centralWidget);
        select->setObjectName(QString::fromUtf8("select"));

        gridLayout->addWidget(select, 0, 1, 1, 1);

        alter = new QPushButton(centralWidget);
        alter->setObjectName(QString::fromUtf8("alter"));

        gridLayout->addWidget(alter, 1, 0, 1, 1);

        delete_2 = new QPushButton(centralWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        gridLayout->addWidget(delete_2, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        stuSystem->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(stuSystem);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 819, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        stuSystem->setMenuBar(menuBar);
        mainToolBar = new QToolBar(stuSystem);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        stuSystem->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(stuSystem);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        stuSystem->setStatusBar(statusBar);
        toolBar = new QToolBar(stuSystem);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        stuSystem->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(stuSystem);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        stuSystem->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(menu->menuAction());

        retranslateUi(stuSystem);

        QMetaObject::connectSlotsByName(stuSystem);
    } // setupUi

    void retranslateUi(QMainWindow *stuSystem)
    {
        stuSystem->setWindowTitle(QApplication::translate("stuSystem", "stuSystem", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("stuSystem", "                          \345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("stuSystem", "\351\200\200\345\207\272\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("stuSystem", "id", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("stuSystem", "name", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("stuSystem", "score", 0, QApplication::UnicodeUTF8)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("stuSystem", "asc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("stuSystem", "desc", 0, QApplication::UnicodeUTF8)
        );
        order->setText(QApplication::translate("stuSystem", "\346\216\222\345\272\217", 0, QApplication::UnicodeUTF8));
        name->setText(QApplication::translate("stuSystem", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        id->setText(QApplication::translate("stuSystem", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        score->setText(QApplication::translate("stuSystem", "\346\210\220\347\273\251", 0, QApplication::UnicodeUTF8));
        insert->setText(QApplication::translate("stuSystem", "\346\217\222\345\205\245", 0, QApplication::UnicodeUTF8));
        select->setText(QApplication::translate("stuSystem", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        alter->setText(QApplication::translate("stuSystem", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("stuSystem", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("stuSystem", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("stuSystem", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("stuSystem", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class stuSystem: public Ui_stuSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUSYSTEM_H
