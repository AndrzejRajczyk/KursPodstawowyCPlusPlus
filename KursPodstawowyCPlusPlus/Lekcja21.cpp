#include <iostream>
using namespace std;
int main() {
	/*Napisz program, który wczyta liczbê, a nastêpnie wypisze j¹ na ekranie. Zabezpiecz przed wczytaniem nieprawid³owej liczby. Wykorzystaj do tego celu wiedzê z jednego z poprzednich rozdzia³ów. Sposób dzia³ania programu:
	1. Podaj liczbê
	2. Je¿eli b³¹d, wróæ do kroku 1.
	3. Wypisz liczbê, która zosta³a podana.
	Napisz prosty kalkulator, który bêdzie potrafi³ dodawaæ, odejmowaæ, mno¿yæ i dzieliæ. Program ten ma dzia³aæ nastêpuj¹co:
	1. Wypisuje obecny wynik
	2. WprowadŸ liczbê
	3. Wybierz dzia³anie (je¿eli liczba ró¿na od 0)
	4. Wykonaj obliczenia (je¿eli liczba ró¿na od 0)
	5. Wróæ do kroku 1.
	6. Je¿eli wprowadzon¹ liczb¹ jest 0, zakoñcz program.
	Przyk³adowe menu wyboru dzia³ania: */


	int x;
	int y;
	char dzialanie;

	bool errorChecker;


	do {
		std::cout << ("podaj pierwsz¹ liczbê: ");
		cin >> x;
		errorChecker = cin.fail();
		cin.clear();
		cin.ignore(1000, '\n');

		} 
	while (errorChecker != 0);

	do {
		cout << ("podaj drug¹ liczbê: ");
		cin >> y;
		errorChecker = cin.fail();
		cin.clear();
		cin.ignore(1000, '\n');
		} 
	while (errorChecker != 0);


	do {
		cout << ("podaj dzia³anie  *,/,+,/,- ");
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
	



