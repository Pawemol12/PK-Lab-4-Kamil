#include "stdafx.h"
#include "Window.h"



Window::Window(string nazwa)
{
	this->nazwaObiektu = nazwa;
	cout << "Window" << endl;
}


Window::~Window()
{
	cout << "Window" << endl;
}


void Window::info() {
	cout << "Nazwa klasy: " << nazwaObiektu << endl;
	cout << "Wsp�rz�dne obiektu: " << "(" << x << ", " << y << ")" << endl;
	cout << "Szeroko��: " << width << " Wysoko��: " << height << endl;
}