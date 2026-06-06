/********************************************************************************
** Form generated from reading UI file 'Test11_6A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_6A_H
#define UI_TEST11_6A_H

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

class Ui_Test11_6AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_6AClass)
    {
        if (Test11_6AClass->objectName().isEmpty())
            Test11_6AClass->setObjectName(QStringLiteral("Test11_6AClass"));
        Test11_6AClass->resize(600, 400);
        menuBar = new QMenuBar(Test11_6AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Test11_6AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_6AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test11_6AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test11_6AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test11_6AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test11_6AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test11_6AClass->setStatusBar(statusBar);

        retranslateUi(Test11_6AClass);

        QMetaObject::connectSlotsByName(Test11_6AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_6AClass)
    {
        Test11_6AClass->setWindowTitle(QApplication::translate("Test11_6AClass", "Test11_6A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test11_6AClass: public Ui_Test11_6AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_6A_H
