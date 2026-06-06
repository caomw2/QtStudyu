/********************************************************************************
** Form generated from reading UI file 'Test9_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_2A_H
#define UI_TEST9_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_2AClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btnPage1;
    QPushButton *btnPage2;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test9_2AClass)
    {
        if (Test9_2AClass->objectName().isEmpty())
            Test9_2AClass->setObjectName(QString::fromUtf8("Test9_2AClass"));
        Test9_2AClass->resize(575, 400);
        centralWidget = new QWidget(Test9_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnPage1 = new QPushButton(centralWidget);
        btnPage1->setObjectName(QString::fromUtf8("btnPage1"));

        verticalLayout->addWidget(btnPage1);

        btnPage2 = new QPushButton(centralWidget);
        btnPage2->setObjectName(QString::fromUtf8("btnPage2"));

        verticalLayout->addWidget(btnPage2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 113, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 10, 391, 311));
        stackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget);

        Test9_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 575, 18));
        Test9_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test9_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test9_2AClass->setStatusBar(statusBar);

        retranslateUi(Test9_2AClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Test9_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_2AClass)
    {
        Test9_2AClass->setWindowTitle(QApplication::translate("Test9_2AClass", "Test9_2A", nullptr));
        btnPage1->setText(QApplication::translate("Test9_2AClass", "\347\254\254\344\270\200\351\241\265", nullptr));
        btnPage2->setText(QApplication::translate("Test9_2AClass", "\347\254\254\344\272\214\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test9_2AClass: public Ui_Test9_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_2A_H
