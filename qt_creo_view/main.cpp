#include "stdafx.h"
#include "CreoViewTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CreoViewTest w;
	w.show();
	return a.exec();
}
