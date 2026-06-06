#include "Test5_1A.h"

Test5_1A::Test5_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//默认选中状态;
	//ui.checkBox->setChecked(true);

	//信号与槽连接
	connect(ui.btnOK, SIGNAL(clicked()), this, SLOT(OnBtnOKClicked()));

}

int Test5_1A::OnBtnOKClicked()
{

	if (ui.checkBox->isChecked())
	{
		qDebug("yes, it is cheched !");
	}
	else
	{
		qDebug("no, it is not checked !");
	}

	return 0;
}
