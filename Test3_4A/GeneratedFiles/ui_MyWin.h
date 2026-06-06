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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWin
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *m_lineEdit;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *MyWin)
    {
        if (MyWin->objectName().isEmpty())
            MyWin->setObjectName(QStringLiteral("MyWin"));
        MyWin->resize(400, 300);
        verticalLayout = new QVBoxLayout(MyWin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_lineEdit = new QLineEdit(MyWin);
        m_lineEdit->setObjectName(QStringLiteral("m_lineEdit"));

        verticalLayout->addWidget(m_lineEdit);

        plainTextEdit = new QPlainTextEdit(MyWin);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(MyWin);

        QMetaObject::connectSlotsByName(MyWin);
    } // setupUi

    void retranslateUi(QWidget *MyWin)
    {
        MyWin->setWindowTitle(QApplication::translate("MyWin", "MyWin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWin: public Ui_MyWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIN_H
