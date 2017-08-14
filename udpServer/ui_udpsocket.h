/********************************************************************************
** Form generated from reading UI file 'udpsocket.ui'
**
** Created: Mon Aug 14 11:56:52 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSOCKET_H
#define UI_UDPSOCKET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_udpSocket
{
public:
    QLineEdit *m_message;
    QPushButton *m_start;
    QPushButton *m_send;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_port;

    void setupUi(QDialog *udpSocket)
    {
        if (udpSocket->objectName().isEmpty())
            udpSocket->setObjectName(QString::fromUtf8("udpSocket"));
        udpSocket->resize(844, 614);
        m_message = new QLineEdit(udpSocket);
        m_message->setObjectName(QString::fromUtf8("m_message"));
        m_message->setGeometry(QRect(190, 180, 291, 51));
        m_start = new QPushButton(udpSocket);
        m_start->setObjectName(QString::fromUtf8("m_start"));
        m_start->setGeometry(QRect(190, 380, 98, 27));
        m_send = new QPushButton(udpSocket);
        m_send->setObjectName(QString::fromUtf8("m_send"));
        m_send->setGeometry(QRect(410, 380, 98, 27));
        widget = new QWidget(udpSocket);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 270, 191, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_port = new QLineEdit(widget);
        m_port->setObjectName(QString::fromUtf8("m_port"));

        horizontalLayout->addWidget(m_port);


        retranslateUi(udpSocket);

        QMetaObject::connectSlotsByName(udpSocket);
    } // setupUi

    void retranslateUi(QDialog *udpSocket)
    {
        udpSocket->setWindowTitle(QApplication::translate("udpSocket", "udpSocket", 0, QApplication::UnicodeUTF8));
        m_start->setText(QApplication::translate("udpSocket", "\345\274\200\345\247\213\345\271\277\346\222\255", 0, QApplication::UnicodeUTF8));
        m_send->setText(QApplication::translate("udpSocket", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("udpSocket", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class udpSocket: public Ui_udpSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSOCKET_H
