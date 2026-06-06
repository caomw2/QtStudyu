#include "CircleWidget.h"

#include <QPainter>
#include <QPen>
#include <QBrush>

CircleWidget::CircleWidget(QWidget *parent)
	: QFrame(parent)
{
}

CircleWidget::~CircleWidget()
{
}

void CircleWidget::paintEvent(QPaintEvent *)
{

	QPen pen(QColor(0, 255, 0));

	QBrush brush(QColor(255, 0, 0));

	QPainter painter(this);
	painter.setPen(pen);
	painter.setBrush(brush);

	//获取当前界面的宽度
	int width = this->width();

	//获取当前界面的高度;
	int height = this->height();

	painter.drawEllipse(0, 0, width, height);


}
