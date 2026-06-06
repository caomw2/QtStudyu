/********************************************************************************
** Form generated from reading UI file 'Test15_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST15_1A_H
#define UI_TEST15_1A_H

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

class Ui_Test15_1AClass
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test15_1AClass)
    {
        if (Test15_1AClass->objectName().isEmpty())
            Test15_1AClass->setObjectName(QStringLiteral("Test15_1AClass"));
        Test15_1AClass->resize(600, 400);
        actionExit = new QAction(Test15_1AClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(Test15_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test15_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test15_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test15_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test15_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test15_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test15_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test15_1AClass->setStatusBar(statusBar);

        retranslateUi(Test15_1AClass);

        QMetaObject::connectSlotsByName(Test15_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test15_1AClass)
    {
        Test15_1AClass->setWindowTitle(QApplication::translate("Test15_1AClass", "Test15_1A", Q_NULLPTR));
        actionExit->setText(QApplication::translate("Test15_1AClass", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test15_1AClass: public Ui_Test15_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST15_1A_H
