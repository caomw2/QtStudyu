#include "Test12_6B.h"

Test12_6B::Test12_6B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//设置表格列数;
	ui.tableWidget->setColumnCount(3);

	QStringList hheader;
	hheader.append("Name");
	hheader.append("Sex");
	hheader.append("Age");

	ui.tableWidget->setHorizontalHeaderLabels(hheader);

	//添加数据
	addData("Mingwei Cao", "Man", 26);
	addData("Ning Li", "Woman", 26);
	addData("Chengyi Cao", "Woman", 2);

}

void Test12_6B::addData(QString _name, QString _sex, int _Age)
{

	//获取行号;
	int rows = ui.tableWidget->rowCount();
	
	//添加新行;
	ui.tableWidget->insertRow(rows);

	//set name;
	QTableWidgetItem * itemName = new QTableWidgetItem();
	itemName->setText(_name);
	ui.tableWidget->setItem(rows, 0, itemName);

	//set sex;
	QTableWidgetItem *itemSex = new QTableWidgetItem();
	itemSex->setText(_sex);
	ui.tableWidget->setItem(rows, 1, itemSex);

	//set age;
	QTableWidgetItem *itemAge = new QTableWidgetItem();
	itemAge->setText(QString::number(_Age));//数字转换为字符串;
	ui.tableWidget->setItem(rows, 2, itemAge);



}
