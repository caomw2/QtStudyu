
#include "CellWidget.h"

CellWidget::CellWidget(QTreeWidgetItem * item, QWidget *parent)
	: QWidget(parent), mItem(item)
{
	ui.setupUi(this);

	connect(ui.btnDelete, SIGNAL(clicked()), this, SLOT(OnBtnDelete()));

}

CellWidget::~CellWidget()
{

}

void CellWidget::OnBtnDelete()
{
	emit userDelete(mItem);
}
