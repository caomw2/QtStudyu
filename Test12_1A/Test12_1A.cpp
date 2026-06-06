#include "Test12_1A.h"
#include <QIcon>
#include <QListWidgetItem>

Test12_1A::Test12_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	

	//connect(ui.listWidget, SIGNAL()
	connect(ui.mBtnShow, SIGNAL(clicked()), this, SLOT(OnBtnShow()));

	connect(ui.mBtnDel, SIGNAL(clicked()), this, SLOT(OnBtnDel()));
}

void Test12_1A::OnBtnShow()
{

	ui.listWidget->setViewMode(QListView::IconMode);

	QIcon icon1("P1040333.JPG");
	QIcon icon2(":/Test12_1A/Resources/P1040333.JPG");
	QIcon icon3(":/Test12_1A/Resources/P1040333.JPG");
	QIcon icon4(":/Test12_1A/Resources/P1040333.JPG");

	QListWidgetItem item1(icon1, "data");
	QListWidgetItem item2(icon2, "data");
	QListWidgetItem item3(icon3, "data");
	QListWidgetItem item4(icon4, "data");

	ui.listWidget->addItem(new QListWidgetItem(icon1, "data"));
	ui.listWidget->addItem(new QListWidgetItem(icon2, "data"));
	ui.listWidget->addItem(new QListWidgetItem(icon3, "data"));
	ui.listWidget->addItem(new QListWidgetItem(icon4, "data"));

	for (int i= 0; i<100; i++)
	{
		ui.listWidget->addItem(new QListWidgetItem(icon1, "data"));
	}


}

void Test12_1A::OnBtnDel()
{
	int id = ui.listWidget->currentRow();

	QListWidgetItem *item = ui.listWidget->takeItem(id);

	if (item != nullptr)
	{
		delete item;
		//item = nullptr;
	}



}
