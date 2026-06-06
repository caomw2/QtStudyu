#include "MyWin.h"

MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{

	//m_button = new QPushButton(this);

	//m_button->setText("Hello, Qt");
	//m_button->setGeometry(100, 100, 200, 50);

	
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	QVBoxLayout * layout = new QVBoxLayout(this);

	layout->addWidget(m_lineEdit);
	layout->addWidget(m_textEdit);

	this->setLayout(layout);


}

MyWin::~MyWin()
{

}
