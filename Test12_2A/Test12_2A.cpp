#include "Test12_2A.h"

#include <QPoint>
#include <QMenu>
#include <QMessageBox>

Test12_2A::Test12_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//设置上下文

	ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

	ui.listWidget->addItem("booking");
	ui.listWidget->addItem("heart");
	ui.listWidget->addItem("looking");

	//消息和槽映射;
	connect(ui.listWidget, SIGNAL(customContextMenuRequested(const QPoint &)), this, SLOT(OnListContextMenu(const QPoint &)));
	connect(ui.actionAdd, SIGNAL(triggered()), this, SLOT(OnBtnAdd()));
	connect(ui.actionRemove, SIGNAL(triggered()), this, SLOT(OnBtnRemove()));


}

void Test12_2A::OnListContextMenu(const QPoint &pt)
{
	QMenu menu;
	menu.addAction(ui.actionAdd);
	menu.addAction(ui.actionRemove);
	
	//映射到屏幕坐标;
	menu.exec(ui.listWidget->mapToGlobal(pt));


}

void Test12_2A::OnBtnAdd()
{

	QMessageBox::information(this, "info", "Add", Qt::Window);

}

void Test12_2A::OnBtnRemove()
{
	QMessageBox::information(this, "info", "Remove", Qt::Window);

}
