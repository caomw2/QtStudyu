
#include "MyWin.h"

#include <QPainter>
#include <QRect>


MyWin::MyWin(QWidget *parent)
	: QFrame(parent)
{

	mCurPos = mEndPos = QPoint(0, 0);
	mStart = mEnd = QPoint(0, 0);

	mPicture.load(":/Test11_7A/Resources/kermit000.jpg");

	mIsPressed = false;

}

MyWin::~MyWin()
{

}

void MyWin::paintEvent(QPaintEvent * event)
{

	int width = this->width();
	int height = this->height();

	QPainter painter(this);
	painter.setPen(QColor(255, 0, 0));

	painter.setBrush(QColor(0, 0, 0));
	
	painter.drawPixmap(QRect( 0, 0, width, height), mPicture, QRect(0, 0, mPicture.width(), mPicture.height()));

	if (mIsPressed == true)
	{

		painter.drawLine(QPoint(0, mEndPos.y()), QPoint(width, mEndPos.y()));
		painter.drawLine(QPoint(mEndPos.x(), 0), QPoint(mEndPos.x(), height));
	}
	
	painter.setBrush(QColor(0, 255, 0));
	QRect rect (mStart, mEnd);

	painter.drawRect(rect);

	

}




void MyWin::mouseDoubleClickEvent(QMouseEvent *event)
{

	QWidget::mouseDoubleClickEvent(event);
}

void MyWin::mouseMoveEvent(QMouseEvent *event)
{
	mEndPos = event->pos();
	mEnd = event->pos();

	update();

}

void MyWin::mousePressEvent(QMouseEvent *event)
{
	mIsPressed = true;
	mCurPos = mEndPos = event->pos();
	mStart = event->pos();

	//update();
	
}

void MyWin::mouseReleaseEvent(QMouseEvent *event)
{
	mIsPressed = false;
	
	update();
	//∑¢…‰–≈∫≈;
	QRect rect(mStart, mEnd);
	
	emit isSelected(rect);

	
}
