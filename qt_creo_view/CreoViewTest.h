#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CreoViewTest.h"

class CreoViewTest : public QMainWindow
{
	Q_OBJECT

public:
	CreoViewTest(QWidget *parent = Q_NULLPTR);

protected slots:
	void OnLoadComplete();
	void OnSelectInstance(QString msg);
	void OnInstance(QString id, QString name, QString parent);

private:
	Ui::CreoViewTestClass ui;
};
