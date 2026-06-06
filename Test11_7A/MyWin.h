#pragma once

#include <QFrame>

#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QPoint>

class MyWin : public QFrame
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

	//定义信号,类似函数声明,但是没有实现;
signals:
	void isSelected(QRect rect);

private:

	void paintEvent(QPaintEvent *event);

	void mouseDoubleClickEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);



private:

	bool mIsPressed = false;

	QPixmap mPicture;

	QPoint mCurPos;
	QPoint mEndPos;

	QPoint mStart;
	QPoint mEnd;

};
