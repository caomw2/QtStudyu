#include "Test3_4A.h"
#include <QtWidgets/QApplication>

#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*Test3_4A w;
	w.show();*/

	MyWin wind;
	wind.show();


	return a.exec();
}
