/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created: Mon Aug 14 15:42:23 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

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

class Ui_tcpclient
{
public:
    QListWidget *m_context;
    QLabel *label;
    QLineEdit *m_port;
    QPushButton *connect;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *m_ip;
    QLineEdit *message;
    QPushButton *m_send;
    QLabel *label_4;
    QLineEdit *username;

    void setupUi(QDialog *tcpclient)
    {
        if (tcpclient->objectName().isEmpty())
            tcpclient->setObjectName(QString::fromUtf8("tcpclient"));
        tcpclient->resize(574, 452);
        m_context = new QListWidget(tcpclient);
        m_context->setObjectName(QString::fromUtf8("m_context"));
        m_context->setGeometry(QRect(70, 60, 421, 261));
        label = new QLabel(tcpclient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 340, 41, 17));
        m_port = new QLineEdit(tcpclient);
        m_port->setObjectName(QString::fromUtf8("m_port"));
        m_port->setGeometry(QRect(80, 340, 113, 27));
        connect = new QPushButton(tcpclient);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(390, 380, 98, 27));
        label_2 = new QLabel(tcpclient);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 20, 66, 17));
        label_3 = new QLabel(tcpclient);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 340, 31, 17));
        m_ip = new QLineEdit(tcpclient);
        m_ip->setObjectName(QString::fromUtf8("m_ip"));
        m_ip->setGeometry(QRect(350, 340, 113, 27));
        message = new QLineEdit(tcpclient);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(80, 420, 281, 27));
        m_send = new QPushButton(tcpclient);
        m_send->setObjectName(QString::fromUtf8("m_send"));
        m_send->setGeometry(QRect(390, 420, 98, 27));
        label_4 = new QLabel(tcpclient);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 390, 66, 17));
        username = new QLineEdit(tcpclient);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(140, 390, 113, 27));

        retranslateUi(tcpclient);

        QMetaObject::connectSlotsByName(tcpclient);
    } // setupUi

    void retranslateUi(QDialog *tcpclient)
    {
        tcpclient->setWindowTitle(QApplication::translate("tcpclient", "tcpclient", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tcpclient", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        connect->setText(QApplication::translate("tcpclient", "connect", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tcpclient", "\345\256\242\346\210\267\347\253\257", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("tcpclient", "ip", 0, QApplication::UnicodeUTF8));
        m_send->setText(QApplication::translate("tcpclient", "send", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("tcpclient", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tcpclient: public Ui_tcpclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
