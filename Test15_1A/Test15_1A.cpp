#include "Test15_1A.h"

#include <QIcon>
#include <QMenu>
#include <QApplication>

Test15_1A::Test15_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//设置托盘图标;

	mTrayIcon.setToolTip("This is a system tray menu !");
	mTrayIcon.setIcon(QIcon(":/Test15_1A/Resources/good.ico"));

	//设置托盘菜单

	QMenu *menu = new QMenu();
	menu->addAction("Add");
	menu->addAction("Delete");
	menu->addSeparator();
	menu->addAction(ui.actionExit);

	mTrayIcon.setContextMenu(menu);

	connect(&mTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), 
		this, SLOT(OnSystemTrayClicked(QSystemTrayIcon::ActivationReason)));	
	
	//显示托盘菜单
	mTrayIcon.show();

	connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(OnBtnExit()));

}

void Test15_1A::closeEvent(QCloseEvent *event)
{
	//隐藏
	this->hide();

	//忽略事件处理;
	event->ignore();

}



void Test15_1A::OnSystemTrayClicked(QSystemTrayIcon::ActivationReason reason)
{
	//双击或者单击时显示窗口;
	if (reason == QSystemTrayIcon::Trigger || reason == QSystemTrayIcon::DoubleClick)
	{
		this->showNormal();
	}

}

void Test15_1A::OnBtnExit()
{
	QApplication::exit(0);

}
