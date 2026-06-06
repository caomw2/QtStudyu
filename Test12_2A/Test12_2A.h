#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test12_2A.h"

class Test12_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test12_2A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test12_2AClass ui;

	private slots:

	void OnListContextMenu(const QPoint &pt);

	void OnBtnAdd();
	void OnBtnRemove();


};
