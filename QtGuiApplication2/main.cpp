#include "QtGuiApplication2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication2 w;
	w.setWindowTitle("ChangeText");
	w.show();
	return a.exec();
}
