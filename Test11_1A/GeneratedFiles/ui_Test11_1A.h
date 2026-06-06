/********************************************************************************
** Form generated from reading UI file 'Test11_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_1A_H
#define UI_TEST11_1A_H

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
#include "CircleWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Test11_1AClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    CircleWidget *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_1AClass)
    {
        if (Test11_1AClass->objectName().isEmpty())
            Test11_1AClass->setObjectName(QStringLiteral("Test11_1AClass"));
        Test11_1AClass->resize(600, 400);
        centralWidget = new QWidget(Test11_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new CircleWidget(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        Test11_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test11_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test11_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test11_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test11_1AClass->setStatusBar(statusBar);

        retranslateUi(Test11_1AClass);

        QMetaObject::connectSlotsByName(Test11_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_1AClass)
    {
        Test11_1AClass->setWindowTitle(QApplication::translate("Test11_1AClass", "Test11_1A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test11_1AClass: public Ui_Test11_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_1A_H
