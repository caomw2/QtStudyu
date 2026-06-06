/********************************************************************************
** Form generated from reading UI file 'Test10_2A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST10_2A_H
#define UI_TEST10_2A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test10_2AClass
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSetting;
    QAction *actionHelp;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *mTextEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test10_2AClass)
    {
        if (Test10_2AClass->objectName().isEmpty())
            Test10_2AClass->setObjectName(QString::fromUtf8("Test10_2AClass"));
        Test10_2AClass->resize(600, 400);
        actionOpen = new QAction(Test10_2AClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Test10_2A/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionNew = new QAction(Test10_2AClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Test10_2A/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionSave = new QAction(Test10_2AClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Test10_2A/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSetting = new QAction(Test10_2AClass);
        actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Test10_2A/Resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon3);
        actionHelp = new QAction(Test10_2AClass);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Test10_2A/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon4);
        centralWidget = new QWidget(Test10_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mTextEdit = new QTextEdit(centralWidget);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));

        verticalLayout->addWidget(mTextEdit);

        Test10_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test10_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        Test10_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test10_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test10_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test10_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test10_2AClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionNew);
        menu->addAction(actionSave);
        menu->addSeparator();
        menu->addAction(menu_2->menuAction());
        menu_2->addAction(actionSetting);
        menu_2->addAction(actionHelp);
        menu_3->addAction(actionSetting);
        menu_3->addAction(actionHelp);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();

        retranslateUi(Test10_2AClass);

        QMetaObject::connectSlotsByName(Test10_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test10_2AClass)
    {
        Test10_2AClass->setWindowTitle(QApplication::translate("Test10_2AClass", "Test10_2A", nullptr));
        actionOpen->setText(QApplication::translate("Test10_2AClass", "\346\211\223\345\274\200", nullptr));
        actionNew->setText(QApplication::translate("Test10_2AClass", "\346\226\260\345\273\272", nullptr));
        actionSave->setText(QApplication::translate("Test10_2AClass", "\344\277\235\345\255\230", nullptr));
        actionSetting->setText(QApplication::translate("Test10_2AClass", "\350\256\276\347\275\256", nullptr));
        actionHelp->setText(QApplication::translate("Test10_2AClass", "\345\270\256\345\212\251", nullptr));
        menu->setTitle(QApplication::translate("Test10_2AClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("Test10_2AClass", "\345\205\266\344\273\226", nullptr));
        menu_3->setTitle(QApplication::translate("Test10_2AClass", "\345\205\266\344\273\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test10_2AClass: public Ui_Test10_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST10_2A_H
