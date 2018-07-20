#pragma once

class CvWidgetEx
{
public:
	CvWidgetEx(QAxWidget *axWdg);
	~CvWidgetEx();

public:

	void ListInstances();
	void SelectInstance(QString id);
	void SetInstanceTransparency(QString inst, double transparency);
	void SetTransparency(QString inst, double transparency, int children);
	void ZoomToAll(int delay);
	void setSourceUrl(QString sourceUrl);
	void ShowAll();
private:
	QAxWidget * axWidget;
};

