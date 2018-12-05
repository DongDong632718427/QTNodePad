#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication2.h"

class QtGuiApplication2 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication2(QWidget *parent = Q_NULLPTR);

	void ButtonSureSlot();
	void CheckBoxUnderLine(bool checked);

private:
	Ui::QtGuiApplication2Class ui;
};
