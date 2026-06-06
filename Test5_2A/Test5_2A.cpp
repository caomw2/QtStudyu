
#include "Test5_2A.h"
#include <QMessageBox>

Test5_2A::Test5_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	connect(ui.btnOK, SIGNAL(clicked()), this, SLOT(OnBtnOK()));


	connect(ui.editPasswd, SIGNAL(returnPressed()), this, SLOT(OnReturnPressed()));

}

int Test5_2A::OnBtnOK()
{
	QString user = ui.editUer->text();
	QString pwd = ui.editPasswd->text();

	if (user == "root" && pwd == "123456")
	{
		QMessageBox::information(this, "Ok", "good input");
	}
	else
	{
		QMessageBox::information(this, "Error", "bad input");
	}


	

	return 0;
}

int Test5_2A::OnReturnPressed()
{
	QMessageBox::information(this, "ReturnPressed", "Hello");
	return 0;
}
