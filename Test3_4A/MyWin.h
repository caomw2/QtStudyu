#pragma once

#include <QWidget>
#include "ui_MyWin.h"

class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent = Q_NULLPTR);
	~MyWin();

private:
	Ui::MyWin ui;
};
