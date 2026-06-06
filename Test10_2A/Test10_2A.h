#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test10_2A.h"




class Test10_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test10_2A(QWidget *parent = Q_NULLPTR);

	private slots:

	int OnMenuNew();
	int OnMenuOpen();
	int OnMenuSave();

private:

	QString mFilePath;

private:
	Ui::Test10_2AClass ui;
};
