#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test9_1B.h"

class Test9_1B : public QMainWindow
{
	Q_OBJECT

public:
	Test9_1B(QWidget *parent = Q_NULLPTR);


	private slots:

	int OnBtnAddPage();

	int OnBtnDelPage();



private:
	Ui::Test9_1BClass ui;
};
