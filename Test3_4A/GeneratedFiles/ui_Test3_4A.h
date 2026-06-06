/********************************************************************************
** Form generated from reading UI file 'Test3_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST3_4A_H
#define UI_TEST3_4A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test3_4AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test3_4AClass)
    {
        if (Test3_4AClass->objectName().isEmpty())
            Test3_4AClass->setObjectName(QStringLiteral("Test3_4AClass"));
        Test3_4AClass->resize(600, 400);
        menuBar = new QMenuBar(Test3_4AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Test3_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test3_4AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test3_4AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test3_4AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test3_4AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test3_4AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test3_4AClass->setStatusBar(statusBar);

        retranslateUi(Test3_4AClass);

        QMetaObject::connectSlotsByName(Test3_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test3_4AClass)
    {
        Test3_4AClass->setWindowTitle(QApplication::translate("Test3_4AClass", "Test3_4A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test3_4AClass: public Ui_Test3_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST3_4A_H
