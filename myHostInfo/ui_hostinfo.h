/********************************************************************************
** Form generated from reading UI file 'hostinfo.ui'
**
** Created: Mon Aug 14 09:34:33 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTINFO_H
#define UI_HOSTINFO_H

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

class Ui_hostInfo
{
public:
    QPushButton *m_detail;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *m_host;
    QLineEdit *host;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_ip;
    QLineEdit *ip;

    void setupUi(QDialog *hostInfo)
    {
        if (hostInfo->objectName().isEmpty())
            hostInfo->setObjectName(QString::fromUtf8("hostInfo"));
        hostInfo->resize(400, 300);
        m_detail = new QPushButton(hostInfo);
        m_detail->setObjectName(QString::fromUtf8("m_detail"));
        m_detail->setGeometry(QRect(110, 220, 98, 27));
        widget = new QWidget(hostInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 50, 182, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_host = new QLabel(widget);
        m_host->setObjectName(QString::fromUtf8("m_host"));

        horizontalLayout->addWidget(m_host);

        host = new QLineEdit(widget);
        host->setObjectName(QString::fromUtf8("host"));

        horizontalLayout->addWidget(host);

        widget1 = new QWidget(hostInfo);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 130, 181, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_ip = new QLabel(widget1);
        m_ip->setObjectName(QString::fromUtf8("m_ip"));

        horizontalLayout_2->addWidget(m_ip);

        ip = new QLineEdit(widget1);
        ip->setObjectName(QString::fromUtf8("ip"));

        horizontalLayout_2->addWidget(ip);


        retranslateUi(hostInfo);

        QMetaObject::connectSlotsByName(hostInfo);
    } // setupUi

    void retranslateUi(QDialog *hostInfo)
    {
        hostInfo->setWindowTitle(QApplication::translate("hostInfo", "hostInfo", 0, QApplication::UnicodeUTF8));
        m_detail->setText(QApplication::translate("hostInfo", "\350\257\246\347\273\206\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        m_host->setText(QApplication::translate("hostInfo", "\344\270\273\346\234\272\345\220\215", 0, QApplication::UnicodeUTF8));
        m_ip->setText(QApplication::translate("hostInfo", "IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hostInfo: public Ui_hostInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTINFO_H
