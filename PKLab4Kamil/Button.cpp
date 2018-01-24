#include "stdafx.h"
#include "Button.h"



Button::~Button()
{
	cout << "Button" << endl;
}

void Button::click() {
	cout << "Przycisk zosta³ nacisniety" << endl;
}

void Button::info() {
	Window::info();
	cout << "Tekst: " << tekst << endl;
}