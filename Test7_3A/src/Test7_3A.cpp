#include "Test7_3A.h"

Test7_3A::Test7_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btnSou, SIGNAL(clicked()), this, SLOT(OnBtnSearch()));

	mWin = new MyWin(this);

	mWin->setWindowFlags(Qt::Window);

}

int Test7_3A::OnBtnSearch()
{
	mWin->show();

	return 0;
}
