#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test11_6A.h"

#include <QVector>
#include <QPoint>

class Test11_6A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_6A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test11_6AClass ui;

private:

	bool mIsPressed;
	QVector<QPoint> mPoints;

	void paintEvent(QPaintEvent *event);

	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

	void mouseDoubleClickEvent(QMouseEvent *event);


};
