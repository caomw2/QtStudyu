
#pragma once

#include <QWidget>

#include "ui_CellWidget.h"

#include <QTreeWidgetItem>

class CellWidget : public QWidget
{
	Q_OBJECT


		signals :
	int userDelete(QTreeWidgetItem * item);

public:
	CellWidget(QTreeWidgetItem * item, QWidget *parent = Q_NULLPTR);
	~CellWidget();

private:
	Ui::CellWidget ui;

	QTreeWidgetItem * mItem;

	private slots:

	void OnBtnDelete();


};
