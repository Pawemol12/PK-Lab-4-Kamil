#include "stdafx.h"
#include "CheckBox.h"




void CheckBox::click() {
	Button::click();
	checked = !checked;
}

void CheckBox::info() {
	Button::info();
	cout << "Zaznaczony: ";
	if (checked) {
		cout << "Tak";
	}
	else {
		cout << "Nie";
	}
	cout << endl;
}

CheckBox::~CheckBox()
{
	cout << "CheckBox" << endl;
}
