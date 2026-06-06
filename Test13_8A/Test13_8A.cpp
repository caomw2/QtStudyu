#include "Test13_8A.h"

#include <QTreeWidgetItem>

#include "CellWidget.h"

Test13_8A::Test13_8A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	addFile("nihao.txt");
	addFile("wohao.txt");
	addFile("tahao.txt");

}

void Test13_8A::addFile(QString _fileName)
{

	QTreeWidgetItem * item = new QTreeWidgetItem();

	item->setText(0, _fileName);
	
	ui.treeWidget->addTopLevelItem(item);

	CellWidget * cellWidget = new CellWidget(item);

	ui.treeWidget->setItemWidget(item, 1, cellWidget);

	//ÐÅºÅºÍ²Û
	connect(cellWidget, SIGNAL(userDelete(QTreeWidgetItem*)), this, SLOT(OnDeleteRow(QTreeWidgetItem*)));

}

void Test13_8A::OnDeleteRow(QTreeWidgetItem * item)
{
	int index = ui.treeWidget->indexOfTopLevelItem(item);

	ui.treeWidget->takeTopLevelItem(index);
	delete item;


}
