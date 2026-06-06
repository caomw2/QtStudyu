//#include "Test2_1A.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*Test2_1A w;
	w.show();*/

	QWidget * w = new QWidget;
	
	w->setGeometry(100, 100, 400, 300);
	w->move(100, 50);
	//w->setFixedWidth(300);
	w->setWindowTitle("Hello World");
	w->show();


	return a.exec();
}
