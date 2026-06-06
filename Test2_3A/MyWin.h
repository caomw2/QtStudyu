#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QVBoxLayout>


class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:

	QPushButton * m_button;

	QPlainTextEdit * m_textEdit;
	QLineEdit * m_lineEdit;

};
