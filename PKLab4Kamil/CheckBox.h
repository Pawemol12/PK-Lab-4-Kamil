#pragma once
#include "Button.h"
class CheckBox : public Button
{
private:
	bool checked = false;
public:
	CheckBox(string nazwa, string tekst) : Button(nazwa, tekst) {
		cout << "CheckBox" << endl;
	};
	~CheckBox();

	virtual void click();
	virtual void info();

	void setChecked(bool checked) { this->checked = checked; };
	bool isChecked() { return this->checked; }
};

