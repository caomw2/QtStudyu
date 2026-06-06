#pragma once

#include <QFrame>

#include <QPixmap>

class MyWin : public QFrame
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:

	void paintEvent(QPaintEvent *);

	QPixmap mPixmap;

};



