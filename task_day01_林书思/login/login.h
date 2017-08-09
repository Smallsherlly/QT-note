/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Wed Aug 9 11:47:15 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGIN_H
#define LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLineEdit *edit1;
    QLineEdit *edit2;
    QLabel *lab1;
    QLabel *lab2;
    QPushButton *btn1;
    QPushButton *btn2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        edit1 = new QLineEdit(Form);
        edit1->setObjectName(QString::fromUtf8("edit1"));
        edit1->setGeometry(QRect(140, 40, 141, 27));
        edit2 = new QLineEdit(Form);
        edit2->setObjectName(QString::fromUtf8("edit2"));
        edit2->setGeometry(QRect(142, 120, 141, 27));
        edit2->setEchoMode(QLineEdit::Password);
        lab1 = new QLabel(Form);
        lab1->setObjectName(QString::fromUtf8("lab1"));
        lab1->setGeometry(QRect(50, 50, 66, 17));
        lab2 = new QLabel(Form);
        lab2->setObjectName(QString::fromUtf8("lab2"));
        lab2->setEnabled(true);
        lab2->setGeometry(QRect(50, 120, 61, 20));
        btn1 = new QPushButton(Form);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 230, 98, 27));
        btn2 = new QPushButton(Form);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(220, 230, 98, 27));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        lab1->setText(QApplication::translate("Form", "\345\270\220\345\217\267", 0, QApplication::UnicodeUTF8));
        lab2->setText(QApplication::translate("Form", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("Form", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("Form", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGIN_H
