/********************************************************************************
** Form generated from reading UI file 'Test2_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_1A_H
#define UI_TEST2_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test2_1AClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test2_1AClass)
    {
        if (Test2_1AClass->objectName().isEmpty())
            Test2_1AClass->setObjectName(QString::fromUtf8("Test2_1AClass"));
        Test2_1AClass->resize(600, 400);
        centralWidget = new QWidget(Test2_1AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 40, 75, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 50, 69, 22));
        Test2_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test2_1AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test2_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test2_1AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test2_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test2_1AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test2_1AClass->setStatusBar(statusBar);

        retranslateUi(Test2_1AClass);

        QMetaObject::connectSlotsByName(Test2_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test2_1AClass)
    {
        Test2_1AClass->setWindowTitle(QApplication::translate("Test2_1AClass", "Test2_1A", nullptr));
        pushButton->setText(QApplication::translate("Test2_1AClass", "PushButton", nullptr));
        comboBox->setItemText(0, QApplication::translate("Test2_1AClass", "aaa", nullptr));
        comboBox->setItemText(1, QApplication::translate("Test2_1AClass", "bbb", nullptr));
        comboBox->setItemText(2, QApplication::translate("Test2_1AClass", "ccc", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Test2_1AClass: public Ui_Test2_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_1A_H
