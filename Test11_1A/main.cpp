#include "Test11_1A.h"
#include <QtWidgets/QApplication>

#include "CircleWidget.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Test11_1A w;
	w.show();


	/*CircleWidget circle(nullptr);

	circle.show();
	circle.move(200, 200);*/


	return a.exec();
}
