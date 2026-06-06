#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_3A.h"



class Test8_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_3A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test8_3AClass ui;

	private slots:

	void OnBtnSelect();

	int OnBtnSend();


};
