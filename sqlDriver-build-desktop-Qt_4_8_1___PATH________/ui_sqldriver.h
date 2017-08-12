/********************************************************************************
** Form generated from reading UI file 'sqldriver.ui'
**
** Created: Fri Aug 11 15:03:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDRIVER_H
#define UI_SQLDRIVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_sqlDriver
{
public:
    QTableView *tableView;

    void setupUi(QDialog *sqlDriver)
    {
        if (sqlDriver->objectName().isEmpty())
            sqlDriver->setObjectName(QString::fromUtf8("sqlDriver"));
        sqlDriver->resize(629, 436);
        tableView = new QTableView(sqlDriver);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 30, 401, 311));

        retranslateUi(sqlDriver);

        QMetaObject::connectSlotsByName(sqlDriver);
    } // setupUi

    void retranslateUi(QDialog *sqlDriver)
    {
        sqlDriver->setWindowTitle(QApplication::translate("sqlDriver", "sqlDriver", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sqlDriver: public Ui_sqlDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDRIVER_H
