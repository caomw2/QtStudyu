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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWin
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnSearch;
    QTextEdit *editSearchWnd;

    void setupUi(QWidget *MyWin)
    {
        if (MyWin->objectName().isEmpty())
            MyWin->setObjectName(QStringLiteral("MyWin"));
        MyWin->resize(517, 358);
        verticalLayout = new QVBoxLayout(MyWin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnSearch = new QPushButton(MyWin);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));

        verticalLayout->addWidget(btnSearch);

        editSearchWnd = new QTextEdit(MyWin);
        editSearchWnd->setObjectName(QStringLiteral("editSearchWnd"));

        verticalLayout->addWidget(editSearchWnd);


        retranslateUi(MyWin);

        QMetaObject::connectSlotsByName(MyWin);
    } // setupUi

    void retranslateUi(QWidget *MyWin)
    {
        MyWin->setWindowTitle(QApplication::translate("MyWin", "MyWin", Q_NULLPTR));
        btnSearch->setText(QApplication::translate("MyWin", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWin: public Ui_MyWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIN_H
