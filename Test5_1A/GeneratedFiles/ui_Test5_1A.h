/********************************************************************************
** Form generated from reading UI file 'Test5_1A.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_1A_H
#define UI_TEST5_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QCheckBox *checkBox;
    QPushButton *btnOK;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_1AClass)
    {
        if (Test5_1AClass->objectName().isEmpty())
            Test5_1AClass->setObjectName(QStringLiteral("Test5_1AClass"));
        Test5_1AClass->resize(600, 400);
        centralWidget = new QWidget(Test5_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        verticalLayout->addWidget(checkBox);

        btnOK = new QPushButton(centralWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        verticalLayout->addWidget(btnOK);

        Test5_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test5_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_1AClass->setStatusBar(statusBar);

        retranslateUi(Test5_1AClass);

        QMetaObject::connectSlotsByName(Test5_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_1AClass)
    {
        Test5_1AClass->setWindowTitle(QApplication::translate("Test5_1AClass", "Test5_1A", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Test5_1AClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:large;\">                         \350\256\272\346\226\207\350\221\227\344\275\234\346\235\203\350\275\254\350\256\251\345\215\217\350\256\256<br /><br />   \351\201\265\347\205\247\343\200\212\344\270\255\345\233\275\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\350\221\227\344\275\234\346\235\203\346\263\225\343\200\213\357\274\214\350\207\252\346\234\254\350\275\254\350\256\251\344\271\246\347\255\276\347\275\262\344\271\213\346\227\245\350\265\267\357\274\214\347\224"
                        "\262\346\226\271\345\220\214\346\204\217\345\260\206\350\257\245\350\256\272\346\226\207\350\221\227\344\275\234\346\235\203\344\270\255\347\232\204\346\261\207\347\274\226\346\235\203\343\200\201\345\244\215\345\210\266\346\235\203\343\200\201\345\217\221\350\241\214\346\235\203\343\200\201\344\277\241\346\201\257\347\275\221\347\273\234\344\274\240\346\222\255\346\235\203\357\274\214\350\275\254\350\256\251\347\273\231\344\271\231\346\226\271<br />\346\234\254\350\275\254\350\256\251\345\215\217\350\256\256\350\207\252\345\217\214\346\226\271\347\255\276\350\256\242\344\271\213\346\227\245\350\265\267\347\224\237\346\225\210\357\274\214\350\213\245\345\234\250\344\271\231\346\226\271\351\200\200\347\250\277\346\210\226\347\224\262\346\226\271\345\234\250\350\256\272\346\226\207\345\217\221\350\241\250\345\211\215\346\222\244\347\250\277\357\274\214\345\210\231\346\234\254\345\215\217\350\256\256\350\207\252\345\212\250\345\244\261\346\225\210\343\200\202</span></p></body></html>", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Test5_1AClass", "\345\220\214\346\204\217\346\234\254\345\215\217\350\256\256", Q_NULLPTR));
        btnOK->setText(QApplication::translate("Test5_1AClass", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Test5_1AClass: public Ui_Test5_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_1A_H
