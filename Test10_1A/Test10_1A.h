#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test10_1A.h"
#include <QLineEdit>

class Test10_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test10_1A(QWidget *parent = Q_NULLPTR);

	private slots:

	int OnMenuNew();
	int OnMenuSave();

private:

	QLineEdit *mLineEdit;

private:
	Ui::Test10_1AClass ui;
};
