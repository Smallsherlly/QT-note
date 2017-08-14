/********************************************************************************
** Form generated from reading UI file 'udpclient.ui'
**
** Created: Mon Aug 14 11:36:27 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPCLIENT_H
#define UI_UDPCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_udpClient
{
public:
    QListWidget *m_context;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *m_port;
    QLineEdit *port;
    QPushButton *m_start;

    void setupUi(QDialog *udpClient)
    {
        if (udpClient->objectName().isEmpty())
            udpClient->setObjectName(QString::fromUtf8("udpClient"));
        udpClient->resize(646, 502);
        m_context = new QListWidget(udpClient);
        m_context->setObjectName(QString::fromUtf8("m_context"));
        m_context->setGeometry(QRect(100, 70, 391, 251));
        widget = new QWidget(udpClient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 380, 361, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_port = new QLabel(widget);
        m_port->setObjectName(QString::fromUtf8("m_port"));

        horizontalLayout->addWidget(m_port);

        port = new QLineEdit(widget);
        port->setObjectName(QString::fromUtf8("port"));

        horizontalLayout->addWidget(port);

        m_start = new QPushButton(widget);
        m_start->setObjectName(QString::fromUtf8("m_start"));

        horizontalLayout->addWidget(m_start);


        retranslateUi(udpClient);

        QMetaObject::connectSlotsByName(udpClient);
    } // setupUi

    void retranslateUi(QDialog *udpClient)
    {
        udpClient->setWindowTitle(QApplication::translate("udpClient", "udpClient", 0, QApplication::UnicodeUTF8));
        m_port->setText(QApplication::translate("udpClient", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        m_start->setText(QApplication::translate("udpClient", "Begin Receive", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class udpClient: public Ui_udpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPCLIENT_H
