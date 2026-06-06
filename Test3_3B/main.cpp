#include "Test3_3B.h"
#include <QtWidgets/QApplication>

#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*Test3_3B w;
	w.show();*/


	MyWin wind;
	wind.move(100, 100);
	wind.show();

	return a.exec();
}
