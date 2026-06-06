#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test11_2A.h"

class Test11_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_2A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test11_2AClass ui;
};
