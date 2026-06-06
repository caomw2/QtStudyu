/********************************************************************************
** Form generated from reading UI file 'MyWin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIN_H
#define UI_MYWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWin
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;

    void setupUi(QWidget *MyWin)
    {
        if (MyWin->objectName().isEmpty())
            MyWin->setObjectName(QStringLiteral("MyWin"));
        MyWin->resize(648, 447);
        horizontalLayout_2 = new QHBoxLayout(MyWin);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(MyWin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(MyWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(MyWin);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        textEdit = new QTextEdit(MyWin);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);


        retranslateUi(MyWin);

        QMetaObject::connectSlotsByName(MyWin);
    } // setupUi

    void retranslateUi(QWidget *MyWin)
    {
        MyWin->setWindowTitle(QApplication::translate("MyWin", "MyWin", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyWin", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWin: public Ui_MyWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIN_H
