/********************************************************************************
** Form generated from reading UI file 'Test13_7A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST13_7A_H
#define UI_TEST13_7A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test13_7AClass
{
public:
    QAction *actionTest;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test13_7AClass)
    {
        if (Test13_7AClass->objectName().isEmpty())
            Test13_7AClass->setObjectName(QStringLiteral("Test13_7AClass"));
        Test13_7AClass->resize(600, 400);
        actionTest = new QAction(Test13_7AClass);
        actionTest->setObjectName(QStringLiteral("actionTest"));
        centralWidget = new QWidget(Test13_7AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        Test13_7AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test13_7AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test13_7AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test13_7AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test13_7AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test13_7AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test13_7AClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionTest);

        retranslateUi(Test13_7AClass);

        QMetaObject::connectSlotsByName(Test13_7AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test13_7AClass)
    {
        Test13_7AClass->setWindowTitle(QApplication::translate("Test13_7AClass", "Test13_7A", Q_NULLPTR));
        actionTest->setText(QApplication::translate("Test13_7AClass", "Test", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Test13_7AClass", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Test13_7AClass", "\351\200\211\344\270\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test13_7AClass: public Ui_Test13_7AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST13_7A_H
