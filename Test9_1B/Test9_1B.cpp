#include "Test9_1B.h"

#include <QPlainTextEdit>

Test9_1B::Test9_1B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//消息和槽

	connect(ui.btnAddPage, SIGNAL(clicked()), this, SLOT(OnBtnAddPage()));
	connect(ui.btnDelPage, SIGNAL(clicked()), this, SLOT(OnBtnDelPage()));


}

int Test9_1B::OnBtnAddPage()
{

	QPlainTextEdit *page = new QPlainTextEdit();

	//添加页面;
	ui.tabWidget->addTab(page, "page1");

	return 0;
}

int Test9_1B::OnBtnDelPage()
{
	//获取当前页面索引;
	int index = ui.tabWidget->currentIndex();

	//删除指定页面;
	ui.tabWidget->removeTab(index);


	return 0;
}
