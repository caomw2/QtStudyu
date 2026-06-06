/********************************************************************************
** Form generated from reading UI file 'Test9_1B.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_1B_H
#define UI_TEST9_1B_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_1BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddPage;
    QPushButton *btnDelPage;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test9_1BClass)
    {
        if (Test9_1BClass->objectName().isEmpty())
            Test9_1BClass->setObjectName(QString::fromUtf8("Test9_1BClass"));
        Test9_1BClass->resize(600, 400);
        centralWidget = new QWidget(Test9_1BClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAddPage = new QPushButton(centralWidget);
        btnAddPage->setObjectName(QString::fromUtf8("btnAddPage"));

        horizontalLayout->addWidget(btnAddPage);

        btnDelPage = new QPushButton(centralWidget);
        btnDelPage->setObjectName(QString::fromUtf8("btnDelPage"));

        horizontalLayout->addWidget(btnDelPage);


        verticalLayout->addLayout(horizontalLayout);

        Test9_1BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_1BClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test9_1BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_1BClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test9_1BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_1BClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test9_1BClass->setStatusBar(statusBar);

        retranslateUi(Test9_1BClass);

        QMetaObject::connectSlotsByName(Test9_1BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_1BClass)
    {
        Test9_1BClass->setWindowTitle(QApplication::translate("Test9_1BClass", "Test9_1B", nullptr));
        btnAddPage->setText(QApplication::translate("Test9_1BClass", "\346\267\273\345\212\240", nullptr));
        btnDelPage->setText(QApplication::translate("Test9_1BClass", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test9_1BClass: public Ui_Test9_1BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_1B_H
