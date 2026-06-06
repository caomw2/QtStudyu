
#pragma warning(disable:4996)

#include "Test2_3A.h"
#include <QtWidgets/QApplication>
#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	/*Test2_3A w;
	w.show();*/

	MyWin m(nullptr);
	m.setWindowTitle("MyWin");

	m.resize(400, 300);
	m.move(100, 100);

	m.show();



	return a.exec();
}
