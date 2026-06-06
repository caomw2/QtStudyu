#include "Test11_3A.h"
#include <QtWidgets/QApplication>

#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	/*Test11_3A w;
	w.show();*/

	MyWin wnd(nullptr);

	wnd.show();

	return a.exec();
}
