#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test15_1A.h"

#include <QtWidgets/QSystemTrayIcon>
#include <QtGui/QCloseEvent>


class Test15_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test15_1A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test15_1AClass ui;

private:
	QSystemTrayIcon mTrayIcon;

private:

	//实现点击关闭按钮后隐藏;
	void closeEvent(QCloseEvent *event);


	private slots:

	//托盘图标的双击事件;
	void OnSystemTrayClicked(QSystemTrayIcon::ActivationReason reason);

	void OnBtnExit();
	

};
