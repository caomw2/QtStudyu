#include "MyWidget.h"

#include <QPen>
#include <QBrush>
#include <QPainter>


MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
}

MyWidget::~MyWidget()
{
}


void MyWidget::paintEvent(QPaintEvent *)
{
	int width = this->width();
	int height = this->height();
	

	QPainter painter(this);
	painter.setBrush(QBrush(QColor(0, 0, 0)));
	painter.drawRect(0, 0, width, height);

	QPen greenPen(QColor(0, 255, 0));
	greenPen.setStyle(Qt::PenStyle::DashDotDotLine);
	greenPen.setWidth(2);

	painter.setPen(greenPen);

	QBrush redBrush(QColor(255, 0, 0));
	painter.setBrush(redBrush);
	redBrush.setStyle(Qt::BrushStyle::CrossPattern);

	painter.drawRect(0, 0, 200, 200);


}
