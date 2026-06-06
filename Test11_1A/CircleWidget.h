#pragma once

#include <QFrame>

class CircleWidget : public QFrame
{
	Q_OBJECT
		
public:
	CircleWidget(QWidget *parent);
	~CircleWidget();


private:

	void paintEvent(QPaintEvent *);

};


