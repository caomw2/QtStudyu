#include "Test8_3A.h"

#include <QFileDialog>

#include <QString>

#include "SendDlg.h"

Test8_3A::Test8_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//ÏûÏ¢ºÍ²Û

	connect(ui.btnSelect, SIGNAL(clicked()), this, SLOT(OnBtnSelect()));
	connect(ui.btnSend, SIGNAL(clicked()), this, SLOT(OnBtnSend()));

}

void Test8_3A::OnBtnSelect()
{
	QString filePath = QFileDialog::getOpenFileName(this, "OpenFile");

	if (filePath.length() >0)
	{
		ui.textFile->setText(filePath);
	}


}

int Test8_3A::OnBtnSend()
{
	QString fileName = ui.textFile->text();
	
	SendDlg dlg(fileName, this);

	dlg.exec();

	return 0;
}
