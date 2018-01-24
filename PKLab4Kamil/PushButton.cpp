#include "stdafx.h"
#include "PushButton.h"


PushButton::~PushButton()
{
	cout << "PushButton" << endl;
}


void PushButton::click() {
	if (enabled) {
		Button::click();
	}
}

void PushButton::info() {
	Button::info();
	cout << "Nacisniety: ";
	if (enabled) {
		cout << "Tak";
	}
	else {
		cout << "Nie";
	}
	cout << endl;
}