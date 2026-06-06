#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test11_1A.h"

class Test11_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_1A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test11_1AClass ui;
};
