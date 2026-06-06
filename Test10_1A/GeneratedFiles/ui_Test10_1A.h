/********************************************************************************
** Form generated from reading UI file 'Test10_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST10_1A_H
#define UI_TEST10_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test10_1AClass
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSettings;
    QAction *actionHelp;
    QAction *actionnnn;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test10_1AClass)
    {
        if (Test10_1AClass->objectName().isEmpty())
            Test10_1AClass->setObjectName(QString::fromUtf8("Test10_1AClass"));
        Test10_1AClass->resize(600, 400);
        actionNew = new QAction(Test10_1AClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Test10_1A/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSave = new QAction(Test10_1AClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Test10_1A/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSettings = new QAction(Test10_1AClass);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Test10_1A/Resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon2);
        actionHelp = new QAction(Test10_1AClass);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Test10_1A/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        actionnnn = new QAction(Test10_1AClass);
        actionnnn->setObjectName(QString::fromUtf8("actionnnn"));
        centralWidget = new QWidget(Test10_1AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test10_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test10_1AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        Test10_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test10_1AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test10_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        Test10_1AClass->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(Test10_1AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test10_1AClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionSave);
        menu_2->addAction(actionSettings);
        menu_2->addAction(actionHelp);
        mainToolBar->addAction(actionNew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSettings);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionHelp);
        mainToolBar->addSeparator();

        retranslateUi(Test10_1AClass);

        QMetaObject::connectSlotsByName(Test10_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test10_1AClass)
    {
        Test10_1AClass->setWindowTitle(QApplication::translate("Test10_1AClass", "Test10_1A", nullptr));
        actionNew->setText(QApplication::translate("Test10_1AClass", "\346\226\260\345\273\272", nullptr));
        actionSave->setText(QApplication::translate("Test10_1AClass", "\344\277\235\345\255\230", nullptr));
        actionSettings->setText(QApplication::translate("Test10_1AClass", "\350\256\276\347\275\256", nullptr));
        actionHelp->setText(QApplication::translate("Test10_1AClass", "\345\270\256\345\212\251", nullptr));
        actionnnn->setText(QApplication::translate("Test10_1AClass", "nnn", nullptr));
        menu->setTitle(QApplication::translate("Test10_1AClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("Test10_1AClass", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test10_1AClass: public Ui_Test10_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST10_1A_H
