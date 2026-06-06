/********************************************************************************
** Form generated from reading UI file 'Test8_3A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_3A_H
#define UI_TEST8_3A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_3AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *textFile;
    QPushButton *btnSelect;
    QPushButton *btnSend;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_3AClass)
    {
        if (Test8_3AClass->objectName().isEmpty())
            Test8_3AClass->setObjectName(QStringLiteral("Test8_3AClass"));
        Test8_3AClass->resize(495, 152);
        centralWidget = new QWidget(Test8_3AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textFile = new QLineEdit(centralWidget);
        textFile->setObjectName(QStringLiteral("textFile"));

        horizontalLayout->addWidget(textFile);

        btnSelect = new QPushButton(centralWidget);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));

        horizontalLayout->addWidget(btnSelect);


        verticalLayout->addLayout(horizontalLayout);

        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        verticalLayout->addWidget(btnSend);

        Test8_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_3AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 495, 23));
        Test8_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_3AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test8_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_3AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test8_3AClass->setStatusBar(statusBar);

        retranslateUi(Test8_3AClass);

        QMetaObject::connectSlotsByName(Test8_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_3AClass)
    {
        Test8_3AClass->setWindowTitle(QApplication::translate("Test8_3AClass", "Test8_3A", Q_NULLPTR));
        btnSelect->setText(QApplication::translate("Test8_3AClass", "\346\265\217\350\247\210", Q_NULLPTR));
        btnSend->setText(QApplication::translate("Test8_3AClass", "\344\274\240\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test8_3AClass: public Ui_Test8_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_3A_H
