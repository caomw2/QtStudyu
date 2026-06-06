#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test11_7A.h"

#include <QRect>

class Test11_7A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_7A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test11_7AClass ui;

	private slots:

	void OnSelectArea( QRect area);

};
