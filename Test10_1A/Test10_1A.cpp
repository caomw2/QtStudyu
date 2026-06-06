#include "Test10_1A.h"

#include <QMessageBox>

Test10_1A::Test10_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	mLineEdit = new QLineEdit;
	mLineEdit->setMaximumSize(QSize(100, 40));
	ui.mainToolBar->insertWidget(ui.actionNew, mLineEdit);
	

	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(OnMenuNew()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(OnMenuSave()));
}

int Test10_1A::OnMenuNew()
{

	QMessageBox::information(this, "info", "New File");

	return 0;
}

int Test10_1A::OnMenuSave()
{
	QString str = mLineEdit->text();
	QMessageBox::information(this, "info", "Save File -> "+ str);
	return 0;
}
