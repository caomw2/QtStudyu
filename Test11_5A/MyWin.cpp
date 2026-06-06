#include "MyWin.h"

#include <QPen>
#include <QBrush>
#include <QPainter>

MyWin::MyWin(QWidget *parent)
	: QFrame(parent)
{
	//mPixmap.load("help.png");
	mPixmap.load(":/Test11_5A/Resources/help.png");
	
}

MyWin::~MyWin()
{

}


void MyWin::paintEvent(QPaintEvent *)
{
	int width = this->width();
	int height = this->height();
	
	QPainter painter(this);

	//»æÖÆÍ¼Ïñ;
	painter.drawPixmap(QRect(0, 0, width, height), mPixmap, QRect(0, 0, mPixmap.width(), mPixmap.height()));

}