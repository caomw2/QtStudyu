#include <QtCore/QCoreApplication>
#include <QtWidgets/QApplication>

#include <QtWidgets/QLabel>

int main(int argc, char *argv[])
{
	//QCoreApplication a(argc, argv);
	QApplication a(argc, argv);

	QLabel label("Hello China");
	
	label.show();

	return a.exec();
}
