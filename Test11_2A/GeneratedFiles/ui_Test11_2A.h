/********************************************************************************
** Form generated from reading UI file 'Test11_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_2A_H
#define UI_TEST11_2A_H

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

class Ui_Test11_2AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_2AClass)
    {
        if (Test11_2AClass->objectName().isEmpty())
            Test11_2AClass->setObjectName(QStringLiteral("Test11_2AClass"));
        Test11_2AClass->resize(600, 400);
        menuBar = new QMenuBar(Test11_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Test11_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test11_2AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test11_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test11_2AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test11_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test11_2AClass->setStatusBar(statusBar);

        retranslateUi(Test11_2AClass);

        QMetaObject::connectSlotsByName(Test11_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_2AClass)
    {
        Test11_2AClass->setWindowTitle(QApplication::translate("Test11_2AClass", "Test11_2A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test11_2AClass: public Ui_Test11_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_2A_H
