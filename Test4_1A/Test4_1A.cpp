#include "Test4_1A.h"

Test4_1A::Test4_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	//连接信号和槽
	connect(ui.btn_ShowButton, SIGNAL(clicked(bool)), this, SLOT(OnShowClicked(bool)));


}


void Test4_1A::OnShowClicked(bool checked)
{
	ui.textEdit->setText("Hello World");

	return;
	
}
