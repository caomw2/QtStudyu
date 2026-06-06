#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test7_3A.h"

#include "MyWin.h"

class Test7_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test7_3A(QWidget *parent = Q_NULLPTR);

	private slots:

	int OnBtnSearch();


private:
	Ui::Test7_3AClass ui;

	MyWin *mWin;
};
