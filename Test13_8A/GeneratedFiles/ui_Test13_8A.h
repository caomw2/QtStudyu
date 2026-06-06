/********************************************************************************
** Form generated from reading UI file 'Test13_8A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST13_8A_H
#define UI_TEST13_8A_H

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

class Ui_Test13_8AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test13_8AClass)
    {
        if (Test13_8AClass->objectName().isEmpty())
            Test13_8AClass->setObjectName(QStringLiteral("Test13_8AClass"));
        Test13_8AClass->resize(600, 400);
        centralWidget = new QWidget(Test13_8AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        Test13_8AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test13_8AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test13_8AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test13_8AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test13_8AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test13_8AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test13_8AClass->setStatusBar(statusBar);

        retranslateUi(Test13_8AClass);

        QMetaObject::connectSlotsByName(Test13_8AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test13_8AClass)
    {
        Test13_8AClass->setWindowTitle(QApplication::translate("Test13_8AClass", "Test13_8A", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Test13_8AClass", "\346\223\215\344\275\234", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Test13_8AClass", "\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test13_8AClass: public Ui_Test13_8AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST13_8A_H
