
//鼠标的支持和发射信号;

#include "Test11_7A.h"
#include <QtWidgets/QApplication>

#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Test11_7A w;
	w.show();

	/*MyWin win(nullptr);
	win.show();*/



	return a.exec();
}
