/********************************************************************************
** Form generated from reading UI file 'Test5_1B.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_1B_H
#define UI_TEST5_1B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_1BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QCheckBox *cbxAgree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNext;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_1BClass)
    {
        if (Test5_1BClass->objectName().isEmpty())
            Test5_1BClass->setObjectName(QStringLiteral("Test5_1BClass"));
        Test5_1BClass->resize(600, 400);
        centralWidget = new QWidget(Test5_1BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        cbxAgree = new QCheckBox(centralWidget);
        cbxAgree->setObjectName(QStringLiteral("cbxAgree"));

        verticalLayout->addWidget(cbxAgree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnNext = new QPushButton(centralWidget);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setEnabled(false);

        horizontalLayout->addWidget(btnNext);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        Test5_1BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_1BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test5_1BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_1BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_1BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_1BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_1BClass->setStatusBar(statusBar);

        retranslateUi(Test5_1BClass);

        QMetaObject::connectSlotsByName(Test5_1BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_1BClass)
    {
        Test5_1BClass->setWindowTitle(QApplication::translate("Test5_1BClass", "Test5_1B", Q_NULLPTR));
        cbxAgree->setText(QApplication::translate("Test5_1BClass", "CheckBox", Q_NULLPTR));
        btnNext->setText(QApplication::translate("Test5_1BClass", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Test5_1BClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test5_1BClass: public Ui_Test5_1BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_1B_H
