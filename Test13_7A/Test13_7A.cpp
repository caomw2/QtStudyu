#include "Test13_7A.h"

#include <QCheckBox>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QMessageBox>

Test13_7A::Test13_7A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	//ÐÅºÅÓë²Û

	connect(ui.actionTest, SIGNAL(triggered()), this, SLOT(OnBtnTest()));

	ui.treeWidget->setColumnWidth(0, 40);

	QDir dir("C:/Anaconda3");

	QStringList nameFilters;
	nameFilters << "*.log" << "*.dll";

	QStringList listStr = dir.entryList(nameFilters);

	for (int i = 0; i < listStr.size(); i++)
	{
		QTreeWidgetItem * item = new QTreeWidgetItem();

		item->setText(1, listStr[i]);

		QCheckBox * checkBox = new QCheckBox();

		ui.treeWidget->addTopLevelItem(item);
		
		ui.treeWidget->setItemWidget(item, 0, checkBox);

	}


}

void Test13_7A::OnBtnTest()
{
	QString nameList = "";

	int count = ui.treeWidget->topLevelItemCount();

	for (int i=0; i< count; i++)
	{
		QTreeWidgetItem * item = ui.treeWidget->topLevelItem(i);

		QCheckBox * box = (QCheckBox *)ui.treeWidget->itemWidget(item, 0);
		if (box->isChecked())
		{
			QString name = item->text(1);
			nameList.append(name);
		}

	}

	QMessageBox::information(this, "info", nameList);


}


















