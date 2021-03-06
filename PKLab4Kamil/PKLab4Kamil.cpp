// PKLab4Kamil.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Button.h"
#include "PushButton.h"
#include "CheckBox.h"
int main()
{
	/*Tyczy się klasy window
		Czy można utworzyć obiekt tak zdefiniowanej klasy? Jaki jest sens tworzenia klas
		zawierających metody czysto wirtualne ?		Odpowiedź: Nie. Sens jest taki, że możemy użyc polimorfizmu dzięki, któremu możemy wywołać
		metody klasy pochodnej operując na typie wskaznika klasy bazowej
	*/


	//Testowanie działania klasy button
	/*Button btn1("Pierwszy przycisk", "To jest tekst pierwszego przycisku");
	btn1.setHeight(100);
	btn1.setWidth(200);
	btn1.setX(4);
	btn1.setY(6);
	btn1.click();
	btn1.info();*/

	Window *wskazniki_window[12];

	for (int i = 0; i < 4; i++) {
		int btnNumber = i + 1;
		wskazniki_window[i] = new Button("Btn" + to_string(btnNumber), "To jest Button" + to_string(btnNumber));
		wskazniki_window[i]->setHeight(100 * btnNumber);
		wskazniki_window[i]->setWidth(200 * btnNumber);
		wskazniki_window[i]->setX(4 * btnNumber);
		wskazniki_window[i]->setY(6 * btnNumber);
		wskazniki_window[i]->click();
		wskazniki_window[i]->info();
	}

	for (int i = 4; i < 8; i++) {
		int pushBtnNumber = i + 1;
		PushButton *pushButton = new PushButton("PushBtn" + to_string(pushBtnNumber), "To jest PushButton" + to_string(pushBtnNumber));
		pushButton->setEnabled(true);
		wskazniki_window[i] = pushButton;
		wskazniki_window[i]->setHeight(100 * pushBtnNumber);
		wskazniki_window[i]->setWidth(200 * pushBtnNumber);
		wskazniki_window[i]->setX(4 * pushBtnNumber);
		wskazniki_window[i]->setY(6 * pushBtnNumber);
		wskazniki_window[i]->click();
		wskazniki_window[i]->info();
	}


	for (int i = 8; i < 12; i++) {
		int checkBoxNumber = i + 1;
		wskazniki_window[i] = new CheckBox("CheckBox" + to_string(checkBoxNumber), "To jest CheckBox" + to_string(checkBoxNumber));
		wskazniki_window[i]->setHeight(100 * checkBoxNumber);
		wskazniki_window[i]->setWidth(200 * checkBoxNumber);
		wskazniki_window[i]->setX(4 * checkBoxNumber);
		wskazniki_window[i]->setY(6 * checkBoxNumber);
		wskazniki_window[i]->click();
		wskazniki_window[i]->info();
	}

	//Zwalniamy pamięć
	for (int i = 0; i < 12; i++) {
		delete wskazniki_window[i];
	}

	/*Czy wersja programu z słowem virtual przy metodzie info() działała tak samo jak bez niego?

		Wersja programu z słowem virtual przy metodzie info() działa inaczej niz bez niego. 
		Ze słowem virtual wykonywana jest metoda odpowiednia dla utworzonego obiektu wskaźnika.
		Bez słowa virtual wykonywana jest metoda klasy wskaźnika, w tym przypadku metoda info() klasy Window (klasy bazowej wszystkich klas potomnych).
	*/

	/*Czy uruchomione zostały wszystkie destruktory przy zwalnianiu pamięci ?
		Nie zostały uruchomione wszystkie destruktory.
		Został wywołane tylko destruktory klasy bazowej Window, czyli klasy jakiej jest tablica wskazniki_window.
	*/
	system("pause");
	return 0;
}

