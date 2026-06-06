/********************************************************************************
** Form generated from reading UI file 'Test12_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST12_2A_H
#define UI_TEST12_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test12_2AClass
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test12_2AClass)
    {
        if (Test12_2AClass->objectName().isEmpty())
            Test12_2AClass->setObjectName(QStringLiteral("Test12_2AClass"));
        Test12_2AClass->resize(600, 400);
        actionAdd = new QAction(Test12_2AClass);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(Test12_2AClass);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        centralWidget = new QWidget(Test12_2AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        Test12_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test12_2AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test12_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test12_2AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test12_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test12_2AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test12_2AClass->setStatusBar(statusBar);

        retranslateUi(Test12_2AClass);

        QMetaObject::connectSlotsByName(Test12_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test12_2AClass)
    {
        Test12_2AClass->setWindowTitle(QApplication::translate("Test12_2AClass", "Test12_2A", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("Test12_2AClass", "Add", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("Test12_2AClass", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test12_2AClass: public Ui_Test12_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST12_2A_H
