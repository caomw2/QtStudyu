/********************************************************************************
** Form generated from reading UI file 'Test1_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST1_2A_H
#define UI_TEST1_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test1_2AClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test1_2AClass)
    {
        if (Test1_2AClass->objectName().isEmpty())
            Test1_2AClass->setObjectName(QString::fromUtf8("Test1_2AClass"));
        Test1_2AClass->resize(432, 225);
        centralWidget = new QWidget(Test1_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 71, 21));
        Test1_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test1_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 432, 18));
        Test1_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test1_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test1_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test1_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test1_2AClass->setStatusBar(statusBar);

        retranslateUi(Test1_2AClass);

        QMetaObject::connectSlotsByName(Test1_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test1_2AClass)
    {
        Test1_2AClass->setWindowTitle(QApplication::translate("Test1_2AClass", "Test1_2A", nullptr));
        label->setText(QApplication::translate("Test1_2AClass", "Hello World", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test1_2AClass: public Ui_Test1_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST1_2A_H
