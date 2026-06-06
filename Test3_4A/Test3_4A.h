#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test3_4A.h"

class Test3_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test3_4A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test3_4AClass ui;
};
