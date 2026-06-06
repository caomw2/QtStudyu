#include "Test5_3A.h"

#include <QMessageBox>

Test5_3A::Test5_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.cmboxLang->addItem("China", "ch");//设置选项和关联数据
	ui.cmboxLang->addItem("English", "en");
	ui.cmboxLang->addItem("French", "fr");
	ui.cmboxLang->insertItem(2, "Korea", "kr");

	connect(ui.btnOK, SIGNAL(clicked()), this, SLOT(OnBtnOK()));

	connect(ui.cmboxLang, SIGNAL(currentIndexChanged(int)), this, SLOT(OnLangChanged(int)));
}



int Test5_3A::OnBtnOK()
{

	int index = ui.cmboxLang->currentIndex();//获得当前的索引

	QString text = ui.cmboxLang->itemText(index);//获取文本
	QString data = ui.cmboxLang->itemData(index).toString();//获得关联数据

	QMessageBox::information(this, "Info", text + "->" + data);


	return 0;
}

int Test5_3A::OnLangChanged(int index)
{

	QString text = ui.cmboxLang->itemText(index);
	QString data = ui.cmboxLang->itemData(index).toString();

	QMessageBox::information(this, "info", text + " - > " + data);

	return 0;
}
