/********************************************************************************
** Form generated from reading UI file 'Test11_5A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_5A_H
#define UI_TEST11_5A_H

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

class Ui_Test11_5AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_5AClass)
    {
        if (Test11_5AClass->objectName().isEmpty())
            Test11_5AClass->setObjectName(QStringLiteral("Test11_5AClass"));
        Test11_5AClass->resize(600, 400);
        menuBar = new QMenuBar(Test11_5AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Test11_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_5AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test11_5AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test11_5AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test11_5AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test11_5AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test11_5AClass->setStatusBar(statusBar);

        retranslateUi(Test11_5AClass);

        QMetaObject::connectSlotsByName(Test11_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_5AClass)
    {
        Test11_5AClass->setWindowTitle(QApplication::translate("Test11_5AClass", "Test11_5A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test11_5AClass: public Ui_Test11_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_5A_H
