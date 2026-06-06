#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test1_2A.h"

class Test1_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test1_2A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test1_2AClass ui;
};
