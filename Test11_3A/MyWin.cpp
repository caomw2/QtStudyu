#include "MyWin.h"

#include <QPen>
#include <QBrush>
#include <QPainter>
#include <QTimerEvent>

MyWin::MyWin(QWidget *parent)
	: QFrame(parent)
{
	mTimes = 0;

	//每隔0.5秒更新一次;
	mTimerID = startTimer(500);
}

MyWin::~MyWin()
{

}

void MyWin::paintEvent(QPaintEvent *)
{

	int width = this->width();
	int height = this->height();

	QPainter painter(this);
	painter.setPen(Qt::PenStyle::NoPen);

	if (mTimes ==0)
	{
		QBrush brush(Qt::BrushStyle::Dense1Pattern);
		brush.setColor(QColor(255, 0, 0));
		
		painter.setBrush(brush);
		painter.drawEllipse(0, 0, 100, 100);	
		mTimes++;

	}
	else
	{
		QBrush brush(Qt::BrushStyle::Dense1Pattern);
		brush.setColor(QColor(0, 0, 255));
		painter.setBrush(brush);
		painter.drawEllipse(0, 0, 100, 100);

		mTimes = 0;
	}



}

void MyWin::timerEvent(QTimerEvent *event)
{
	if (event->timerId() == mTimerID)
	{
		//更新paintEvent函数;
		update();
	}
}
