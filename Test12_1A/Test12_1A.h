#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test12_1A.h"

class Test12_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test12_1A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test12_1AClass ui;

	private slots:

	void OnBtnShow();
	
	void OnBtnDel();


};
