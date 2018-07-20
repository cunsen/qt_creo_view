#include "stdafx.h"
#include "CvWidgetEx.h"

CvWidgetEx::CvWidgetEx(QAxWidget *axWdg)
	:axWidget(axWdg)
{


}

CvWidgetEx::~CvWidgetEx()
{
}

void CvWidgetEx::ListInstances()
{
	axWidget->dynamicCall("ListInstances()");
}

void CvWidgetEx::SelectInstance(QString id)
{
// 	axWidget->dynamicCall("SelectInstance(QString id)",id);
	void *_a[] = { 0, (void*)&id };
	axWidget->qt_metacall(QMetaObject::InvokeMetaMethod, 130, _a);
}

void CvWidgetEx::SetInstanceTransparency(QString inst, double transparency)
{
	axWidget->dynamicCall("SetInstanceTransparency(QString inst, double transparency)",
		inst,transparency);
}

void CvWidgetEx::SetTransparency(QString inst, double transparency, int children)
{
	axWidget->dynamicCall("SetTransparency(QString inst, double transparency, int children)",
		inst, transparency,children);
}

void CvWidgetEx::ZoomToAll(int delay)
{
	axWidget->dynamicCall("ZoomToAll(int delay)",delay);
}

void CvWidgetEx::setSourceUrl(QString sourceUrl)
{
	//实际上两个方法都可以
	//axWidget->dynamicCall("setSourceUrl(QString sourceUrl)", sourceUrl);
	axWidget->setProperty("sourceUrl", sourceUrl);
}

void CvWidgetEx::ShowAll()
{
	axWidget->dynamicCall("ShowAll()");
}
