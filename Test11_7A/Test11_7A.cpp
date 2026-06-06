#include "Test11_7A.h"

#include <QMessageBox>

Test11_7A::Test11_7A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.nFrame, SIGNAL(isSelected(QRect)), this, SLOT(OnSelectArea(QRect)));
}

void Test11_7A::OnSelectArea(QRect area)
{

	QMessageBox::information(this, "info", "Signal-Slot");
}
