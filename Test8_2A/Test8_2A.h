#pragma once

#pragma warning(disable:4996)

#include <QtWidgets/QMainWindow>
#include "ui_Test8_2A.h"

class Test8_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_2A(QWidget *parent = Q_NULLPTR);

	virtual void timerEvent(QTimerEvent *event);

	int mTimerID;

private:
	Ui::Test8_2AClass ui;
};
