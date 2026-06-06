#include "Test2_2A.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*Test2_2A w;
	w.show();*/

	QWidget wgt;
	wgt.setGeometry(0, 0, 500, 300);
	wgt.move(200, 200);
	wgt.show();


	return a.exec();
}
