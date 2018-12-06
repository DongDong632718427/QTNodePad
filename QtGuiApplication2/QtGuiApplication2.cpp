#include "QtGuiApplication2.h"
#include <QButtonGroup>
#include <QDebug>

QtGuiApplication2::QtGuiApplication2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	

	editTextColorRadioButtonGroup = new QButtonGroup();
	editTextColorRadioButtonGroup->setParent(this);
	editTextColorRadioButtonGroup->addButton(ui.radioButtonBlack, 0);
	editTextColorRadioButtonGroup->addButton(ui.radioButtonRed, 1);
	editTextColorRadioButtonGroup->addButton(ui.radioButtonBlue, 2);


	connect(ui.buttonSure, &QPushButton::clicked, this, &QtGuiApplication2::ButtonSureSlot);

	connect(ui.radioButtonBlack, &QPushButton::clicked, this, &QtGuiApplication2::editTextSetColorSlot);
	connect(ui.radioButtonRed, &QPushButton::clicked, this, &QtGuiApplication2::editTextSetColorSlot);
	connect(ui.radioButtonBlue, &QPushButton::clicked, this, &QtGuiApplication2::editTextSetColorSlot);

	connect(ui.buttonClose, &QPushButton::clicked, this, &QMainWindow::close);
	
}

void QtGuiApplication2::ButtonSureSlot() {
		QFont font = ui.editText->font();
		font.setUnderline(ui.checkBoxUnderLine->isChecked());
		font.setItalic(ui.checkBoxItalic->isChecked());
		font.setBold(ui.checkBoxBold->isChecked());
		ui.editText->setFont(font);

		
}

void QtGuiApplication2::editTextSetColorSlot() {
	switch (editTextColorRadioButtonGroup->checkedId())
	{
	case 0:
		qDebug() << "black";
		break;
	case 1:
		qDebug() << "red";
		break;
	case 2:
		qDebug() << "blue";
		break;
	default:
		break;
	}
}