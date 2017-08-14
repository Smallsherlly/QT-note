/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created: Mon Aug 14 15:43:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tcpserver
{
public:
    QListWidget *m_context;
    QLabel *label;
    QLineEdit *m_port;
    QPushButton *m_create;
    QLabel *label_2;

    void setupUi(QDialog *tcpserver)
    {
        if (tcpserver->objectName().isEmpty())
            tcpserver->setObjectName(QString::fromUtf8("tcpserver"));
        tcpserver->resize(571, 469);
        m_context = new QListWidget(tcpserver);
        m_context->setObjectName(QString::fromUtf8("m_context"));
        m_context->setGeometry(QRect(110, 50, 256, 192));
        label = new QLabel(tcpserver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 290, 66, 17));
        m_port = new QLineEdit(tcpserver);
        m_port->setObjectName(QString::fromUtf8("m_port"));
        m_port->setGeometry(QRect(210, 280, 113, 27));
        m_create = new QPushButton(tcpserver);
        m_create->setObjectName(QString::fromUtf8("m_create"));
        m_create->setGeometry(QRect(400, 290, 98, 27));
        label_2 = new QLabel(tcpserver);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 10, 66, 17));

        retranslateUi(tcpserver);

        QMetaObject::connectSlotsByName(tcpserver);
    } // setupUi

    void retranslateUi(QDialog *tcpserver)
    {
        tcpserver->setWindowTitle(QApplication::translate("tcpserver", "tcpserver", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tcpserver", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        m_create->setText(QApplication::translate("tcpserver", "\345\210\233\345\273\272\350\201\212\345\244\251\345\256\244", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tcpserver", "\346\234\215\345\212\241\347\253\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tcpserver: public Ui_tcpserver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
