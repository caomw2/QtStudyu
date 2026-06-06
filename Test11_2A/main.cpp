#include "Test11_2A.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*Test11_2A w;
	w.show();*/

	MyWidget wnd(nullptr);
	wnd.show();

	return a.exec();
}
