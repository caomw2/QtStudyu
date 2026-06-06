#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test13_7A.h"

class Test13_7A : public QMainWindow
{
	Q_OBJECT

public:
	Test13_7A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test13_7AClass ui;

	private slots:

	void OnBtnTest();
};
