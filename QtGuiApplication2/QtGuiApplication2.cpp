#include "QtGuiApplication2.h"
#include <QDebug>

QtGuiApplication2::QtGuiApplication2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.checkBoxUnderLine, &QCheckBox::toggled, this, &QtGuiApplication2::CheckBoxUnderLine);

	connect(ui.buttonSure, &QPushButton::clicked, this, &QtGuiApplication2::ButtonSureSlot);

	connect(ui.buttonClose, &QPushButton::clicked, this, &QMainWindow::close);
}


void QtGuiApplication2::ButtonSureSlot() {
}

void QtGuiApplication2::CheckBoxUnderLine(bool checked) {
	if (checked) {
		ui.editText->setText("Ture");
	}
	else{
		ui.editText->setText("False");
	}
}