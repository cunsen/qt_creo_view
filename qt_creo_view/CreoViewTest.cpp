#include "stdafx.h"
#include "CreoViewTest.h"
#include "CvWidgetEx.h"

CreoViewTest::CreoViewTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

// 	QString strInfo = ui.axWidget->generateDocumentation();
	QObject::connect(ui.axWidget, SIGNAL(OnLoadComplete()), this, SLOT(OnLoadComplete()));
	QObject::connect(ui.axWidget, SIGNAL(OnSelectInstance(QString)), this, SLOT(OnSelectInstance(QString)));
	QObject::connect(ui.axWidget, SIGNAL(OnInstance(QString, QString, QString)), this, SLOT(OnInstance(QString, QString, QString)));

	CvWidgetEx cv(ui.axWidget);
	QString strPath = QDir::currentPath()+"/../bin/";
	QFileInfo finfo(strPath,"blower_complete_k01.prt");
	strPath = finfo.absoluteFilePath();
	cv.setSourceUrl(strPath);
}

void CreoViewTest::OnLoadComplete()
{
	ui.axWidget->dynamicCall("ListInstances()");
}

void CreoViewTest::OnSelectInstance(QString msg)
{
}

void CreoViewTest::OnInstance(QString id, QString name, QString parent)
{
}
