#pragma once

using namespace std;
class Window
{
protected: //Nie mog� tego zdefiniowa� jako private, bo w klasach pochodnych nie b�d� m�g� 
	//nazywa� obiekt�w
	string nazwaObiektu;

protected:
	int x;
	int y;

	int width;
	int height;


public:
	Window(string nazwa);
	~Window();


	string pobierzNazweObiektu() { return nazwaObiektu; };
	virtual void click() = 0;
	virtual void info();
	void setX(int x) { this->x = x; };
	int getX() { return x; };
	void setY(int y) { this->y = y; };
	int getY() { return y; };
	void setWidth(int width) { this->width = width; };
	int getWidth() { return width; };
	void setHeight(int height) { this->height = height; };
	int getHeight() { return height; };
};

