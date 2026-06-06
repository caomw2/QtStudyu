/********************************************************************************
** Form generated from reading UI file 'Test2_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_2A_H
#define UI_TEST2_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test2_2AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test2_2AClass)
    {
        if (Test2_2AClass->objectName().isEmpty())
            Test2_2AClass->setObjectName(QString::fromUtf8("Test2_2AClass"));
        Test2_2AClass->resize(600, 400);
        menuBar = new QMenuBar(Test2_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Test2_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test2_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test2_2AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test2_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test2_2AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test2_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test2_2AClass->setStatusBar(statusBar);

        retranslateUi(Test2_2AClass);

        QMetaObject::connectSlotsByName(Test2_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test2_2AClass)
    {
        Test2_2AClass->setWindowTitle(QApplication::translate("Test2_2AClass", "Test2_2A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test2_2AClass: public Ui_Test2_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_2A_H
