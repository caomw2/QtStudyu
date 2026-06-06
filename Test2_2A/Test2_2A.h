#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test2_2A.h"

class Test2_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test2_2A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test2_2AClass ui;
};
