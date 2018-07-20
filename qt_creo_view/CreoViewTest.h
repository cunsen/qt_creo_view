#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CreoViewTest.h"

class CreoViewTest : public QMainWindow
{
	Q_OBJECT

public:
	CreoViewTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::CreoViewTestClass ui;
};
