#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test12_6B.h"

#include <QString>

class Test12_6B : public QMainWindow
{
	Q_OBJECT

public:
	Test12_6B(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test12_6BClass ui;

private:

	void addData(QString _name, QString _sex, int _Age);
};
