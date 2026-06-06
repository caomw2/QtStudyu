#include "Test9_1A.h"

#include <QMessageBox>

Test9_1A::Test9_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//消息和槽的映射;
	connect(ui.btnSave, SIGNAL(clicked()), this, SLOT(OnBtnSave()));
	
}



int Test9_1A::OnBtnSave()
{
	QString textLocal = ui.texLocation->text();

	QString textLogin;
	if (ui.cbxLogin->isChecked())
	{
		textLogin = ui.cbxLogin->text();
	
	}
	
	QMessageBox::information(this, "info", textLocal + " -> " + textLogin);
	
	return 0;
}
