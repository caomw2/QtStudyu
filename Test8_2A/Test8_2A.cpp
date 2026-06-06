
#pragma warning(disable:4996)

#include "Test8_2A.h"
#include <QTimerEvent>
#include <QTime>

Test8_2A::Test8_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//启动定时器,设置定时器的时间间隔为1000毫秒,即1秒钟检查一次;
	mTimerID = startTimer(1000);
}



void Test8_2A::timerEvent(QTimerEvent *event)
{
	
	if (event->timerId() == mTimerID)//判断定时器的ID
	{
		//获取当前系统的时间;
		QTime time = QTime::currentTime();

		//转换为可显示的字符串;
		QString text = time.toString("HH:mm:ss");

		//将时间显示在控件中;
		ui.mEditTime->setText(text);

	}




}
