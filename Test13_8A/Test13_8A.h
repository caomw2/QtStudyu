#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test13_8A.h"
#include <QTreeWidgetItem>

class Test13_8A : public QMainWindow
{
	Q_OBJECT

public:
	Test13_8A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test13_8AClass ui;

	void addFile(QString _fileName);

	private slots:
	
	void OnDeleteRow(QTreeWidgetItem * item);

};
