/********************************************************************************
** Form generated from reading UI file 'typein.ui'
**
** Created: Wed Aug 9 20:12:00 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPEIN_H
#define UI_TYPEIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_typein
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *typein)
    {
        if (typein->objectName().isEmpty())
            typein->setObjectName(QString::fromUtf8("typein"));
        typein->resize(400, 300);
        pushButton = new QPushButton(typein);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 170, 98, 27));
        textEdit = new QTextEdit(typein);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 50, 104, 78));
        textEdit_2 = new QTextEdit(typein);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(250, 50, 104, 78));
        label = new QLabel(typein);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 111, 20));
        pushButton_2 = new QPushButton(typein);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 170, 98, 27));
        label_2 = new QLabel(typein);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 70, 66, 17));
        label_3 = new QLabel(typein);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 40, 61, 20));
        label_4 = new QLabel(typein);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 66, 17));
        lineEdit = new QLineEdit(typein);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 130, 81, 27));
        label_5 = new QLabel(typein);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 140, 66, 17));
        lineEdit_2 = new QLineEdit(typein);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 130, 81, 27));

        retranslateUi(typein);

        QMetaObject::connectSlotsByName(typein);
    } // setupUi

    void retranslateUi(QWidget *typein)
    {
        typein->setWindowTitle(QApplication::translate("typein", "typein", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("typein", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("typein", "\346\211\223\345\255\227\347\273\203\344\271\240\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("typein", "\347\273\223\346\235\237", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("typein", "60", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("typein", "\345\211\251\344\275\231\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("typein", "\350\276\223\345\205\245\351\200\237\347\216\207", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("typein", "\345\207\206\347\241\256\347\216\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class typein: public Ui_typein {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPEIN_H
