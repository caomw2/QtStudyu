/********************************************************************************
** Form generated from reading UI file 'Test11_7A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_7A_H
#define UI_TEST11_7A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "MyWin.h"

QT_BEGIN_NAMESPACE

class Ui_Test11_7AClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    MyWin *nFrame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_7AClass)
    {
        if (Test11_7AClass->objectName().isEmpty())
            Test11_7AClass->setObjectName(QStringLiteral("Test11_7AClass"));
        Test11_7AClass->resize(600, 400);
        centralWidget = new QWidget(Test11_7AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nFrame = new MyWin(centralWidget);
        nFrame->setObjectName(QStringLiteral("nFrame"));
        nFrame->setFrameShape(QFrame::StyledPanel);
        nFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(nFrame);

        Test11_7AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_7AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test11_7AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_7AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test11_7AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test11_7AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test11_7AClass->setStatusBar(statusBar);

        retranslateUi(Test11_7AClass);

        QMetaObject::connectSlotsByName(Test11_7AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_7AClass)
    {
        Test11_7AClass->setWindowTitle(QApplication::translate("Test11_7AClass", "Test11_7A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test11_7AClass: public Ui_Test11_7AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_7A_H
