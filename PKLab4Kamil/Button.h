#pragma once
#include "Window.h"
class Button :
	public Window
{
protected:
	string tekst;

public:
	Button(string nazwa, string tekst) : Window(nazwa), tekst(tekst) {
		cout << "Button" << endl;
	};
	~Button();

	virtual void click();
	virtual void info();
};

