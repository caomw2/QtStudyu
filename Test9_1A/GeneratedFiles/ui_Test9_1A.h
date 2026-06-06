/********************************************************************************
** Form generated from reading UI file 'Test9_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_1A_H
#define UI_TEST9_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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

class Ui_Test9_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *texLocation;
    QWidget *tab_2;
    QCheckBox *cbxLogin;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test9_1AClass)
    {
        if (Test9_1AClass->objectName().isEmpty())
            Test9_1AClass->setObjectName(QString::fromUtf8("Test9_1AClass"));
        Test9_1AClass->resize(600, 400);
        centralWidget = new QWidget(Test9_1AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 60, 195, 22));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 0));

        horizontalLayout_2->addWidget(label);

        texLocation = new QLineEdit(widget);
        texLocation->setObjectName(QString::fromUtf8("texLocation"));

        horizontalLayout_2->addWidget(texLocation);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        cbxLogin = new QCheckBox(tab_2);
        cbxLogin->setObjectName(QString::fromUtf8("cbxLogin"));
        cbxLogin->setGeometry(QRect(150, 70, 71, 16));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout);

        Test9_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_1AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test9_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_1AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test9_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_1AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test9_1AClass->setStatusBar(statusBar);

        retranslateUi(Test9_1AClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Test9_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_1AClass)
    {
        Test9_1AClass->setWindowTitle(QApplication::translate("Test9_1AClass", "Test9_1A", nullptr));
        label->setText(QApplication::translate("Test9_1AClass", "\344\275\215\347\275\256", nullptr));
        texLocation->setText(QApplication::translate("Test9_1AClass", "\346\210\221\345\234\250\345\220\210\350\202\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Test9_1AClass", "\347\224\250\346\210\267\350\256\276\347\275\256", nullptr));
        cbxLogin->setText(QApplication::translate("Test9_1AClass", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Test9_1AClass", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        btnSave->setText(QApplication::translate("Test9_1AClass", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test9_1AClass: public Ui_Test9_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_1A_H
