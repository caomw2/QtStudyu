/********************************************************************************
** Form generated from reading UI file 'Test7_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_3A_H
#define UI_TEST7_3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test7_3AClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnSou;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test7_3AClass)
    {
        if (Test7_3AClass->objectName().isEmpty())
            Test7_3AClass->setObjectName(QStringLiteral("Test7_3AClass"));
        Test7_3AClass->resize(600, 400);
        centralWidget = new QWidget(Test7_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnSou = new QPushButton(centralWidget);
        btnSou->setObjectName(QStringLiteral("btnSou"));
        btnSou->setGeometry(QRect(130, 80, 75, 23));
        Test7_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test7_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test7_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test7_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test7_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test7_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test7_3AClass->setStatusBar(statusBar);

        retranslateUi(Test7_3AClass);

        QMetaObject::connectSlotsByName(Test7_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test7_3AClass)
    {
        Test7_3AClass->setWindowTitle(QApplication::translate("Test7_3AClass", "Test7_3A", Q_NULLPTR));
        btnSou->setText(QApplication::translate("Test7_3AClass", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test7_3AClass: public Ui_Test7_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_3A_H
