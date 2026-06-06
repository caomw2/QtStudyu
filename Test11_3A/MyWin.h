#pragma once

#include <QFrame>

class MyWin : public QFrame
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:

	void paintEvent(QPaintEvent *);

	void timerEvent(QTimerEvent *event);

	int mTimerID;

	int mTimes;

};
