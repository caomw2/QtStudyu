/********************************************************************************
** Form generated from reading UI file 'Test4_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST4_1A_H
#define UI_TEST4_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test4_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ShowButton;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test4_1AClass)
    {
        if (Test4_1AClass->objectName().isEmpty())
            Test4_1AClass->setObjectName(QStringLiteral("Test4_1AClass"));
        Test4_1AClass->resize(602, 399);
        centralWidget = new QWidget(Test4_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_ShowButton = new QPushButton(centralWidget);
        btn_ShowButton->setObjectName(QStringLiteral("btn_ShowButton"));

        horizontalLayout->addWidget(btn_ShowButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        Test4_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test4_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 602, 23));
        Test4_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test4_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test4_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test4_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test4_1AClass->setStatusBar(statusBar);

        retranslateUi(Test4_1AClass);

        QMetaObject::connectSlotsByName(Test4_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test4_1AClass)
    {
        Test4_1AClass->setWindowTitle(QApplication::translate("Test4_1AClass", "Test4_1A", Q_NULLPTR));
        btn_ShowButton->setText(QApplication::translate("Test4_1AClass", "show", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test4_1AClass: public Ui_Test4_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST4_1A_H
