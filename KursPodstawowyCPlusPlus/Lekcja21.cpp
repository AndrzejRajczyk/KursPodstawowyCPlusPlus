#include <iostream>
using namespace std;
int main() {
	/*Napisz program, kt�ry wczyta liczb�, a nast�pnie wypisze j� na ekranie. Zabezpiecz przed wczytaniem nieprawid�owej liczby. Wykorzystaj do tego celu wiedz� z jednego z poprzednich rozdzia��w. Spos�b dzia�ania programu:
	1. Podaj liczb�
	2. Je�eli b��d, wr�� do kroku 1.
	3. Wypisz liczb�, kt�ra zosta�a podana.
	Napisz prosty kalkulator, kt�ry b�dzie potrafi� dodawa�, odejmowa�, mno�y� i dzieli�. Program ten ma dzia�a� nast�puj�co:
	1. Wypisuje obecny wynik
	2. Wprowad� liczb�
	3. Wybierz dzia�anie (je�eli liczba r�na od 0)
	4. Wykonaj obliczenia (je�eli liczba r�na od 0)
	5. Wr�� do kroku 1.
	6. Je�eli wprowadzon� liczb� jest 0, zako�cz program.
	Przyk�adowe menu wyboru dzia�ania: */


	int x;
	int y;
	char dzialanie;

	bool errorChecker;


	do {
		std::cout << ("podaj pierwsz� liczb�: ");
		cin >> x;
		errorChecker = cin.fail();
		cin.clear();
		cin.ignore(1000, '\n');

		} 
	while (errorChecker != 0);

	do {
		cout << ("podaj drug� liczb�: ");
		cin >> y;
		errorChecker = cin.fail();
		cin.clear();
		cin.ignore(1000, '\n');
		} 
	while (errorChecker != 0);


	do {
		cout << ("podaj dzia�anie  *,/,+,/,- ");
		cout << "" ;
		cin >> dzialanie;
		errorChecker = cin.fail();
		cin.clear();
		cin.ignore(1000, '\n');
		}
	while ('+' != dzialanie  && '-' != dzialanie  && '*'!= dzialanie && '/' !=dzialanie);


		switch(dzialanie) {
		case '+':
			cout << "wynik to" << x + y;
			break;
		case '-':
			cout <<"wynik to " << x - y;
				break;
		case '*':
			cout << x * y;
		case'/':
			if (y != 0) {
				cout << "wynik to" << x / y;
			}
			else {
				cout << "brak dzielenia przez 0";

			}
			break;


	}





	return 0;
}
	



