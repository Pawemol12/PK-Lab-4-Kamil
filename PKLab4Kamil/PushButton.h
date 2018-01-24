#pragma once
#include "Button.h"
class PushButton :
	public Button
{
private:
	bool enabled = false;

public:
	PushButton(string nazwa, string tekst) : Button(nazwa, tekst) {
		cout << "PushButton" << endl;
	};
	~PushButton();

	virtual void click();
	virtual void info();


	void setEnabled(bool enabled) { this->enabled = enabled; };
	bool isEnabled() { return this->enabled; }


};

