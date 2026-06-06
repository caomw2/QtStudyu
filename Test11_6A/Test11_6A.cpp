#include "Test11_6A.h"


#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>

Test11_6A::Test11_6A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	mIsPressed = false;
	mPoints.clear();
}

void Test11_6A::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);

	
	//设置背景;
	painter.setBrush(QBrush(QColor(0, 0, 0)));

	int width = this->width();
	int height = this->height();

	
	painter.drawRect(0, 0, width, height);

	//设置线条颜色;
	painter.setPen(QPen(QColor(255, 0, 0)));

	if (mIsPressed == true)
	{
		for (int i=0; i< mPoints.size() -1; i++)
		{
			QPoint &p1 = mPoints[i];
			QPoint &p2 = mPoints[i + 1];

			painter.drawLine(p1, p2);
		}

	}



}

void Test11_6A::mouseMoveEvent(QMouseEvent *event)
{
	if (mIsPressed == true)
	{
		
		QPoint pos = event->pos();

		mPoints.append(pos);

		//重新绘制;
		update();
	}

}

void Test11_6A::mousePressEvent(QMouseEvent *event)
{
	mIsPressed = true;
	mPoints.clear();
	//update();
	

}

void Test11_6A::mouseReleaseEvent(QMouseEvent *event)
{
	mIsPressed = false;
	//mPoints.clear();
	update();
}

void Test11_6A::mouseDoubleClickEvent(QMouseEvent *event)
{

	QWidget::mouseDoubleClickEvent(event);

}
