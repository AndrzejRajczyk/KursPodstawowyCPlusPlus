/*oim zadaniem domowym jest napisanie prostej gry, kt�ra ma dzia�a� nast�puj�co:
1. Program losuje liczb� z przedzia�u od 1 do 1000.
2. U�ytkownik zgaduje liczb�, kt�ra zosta�a wylosowana.
3. Je�eli podana liczba jest za du�a (za ma�a) gra wypisuje stosowny komunikat i powraca do kroku 2.
4. Je�eli gracz trafi liczb� wylosowan� to progam ko�czy dzia�anie, wypisuj�c na ekran wylosowan� liczb� oraz liczb� 'strza��w', kt�re odda� gracz.
Gra ma by� zabezpieczona przed mo�liwo�ci� wprowadzenia b��dnych warto�ci liczbowych.*/

/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace  std;

int main() {
	int losowana;
	int zgadywana;
	int counter = 1;
	bool errorChecker;


	cout << "Zgadnij jaka liczbe wylosowalem. Liczba jest wieksza lub rowna od zera i nie wieksza od 1000 ";
	cout << endl;
	;
	zgadywana = -1;
	srand(time(NULL));
	losowana = (rand() % 1001) + 1;
	cout << "Podaj swoja liczbe: ";
	cin >> zgadywana;
	errorChecker = cin.fail();
	cin.clear();



	while (errorChecker == true) {
		cin.ignore(1000, '\n');
		cout << "Podaj prawidlowa liczbe: ";
		//cin.ignore(1000, '\n');
		cin >> zgadywana;
		errorChecker = cin.fail();
		cin.clear();
	}


	while (zgadywana != losowana) {
		if (zgadywana < losowana) {
			cout << "Twoja liczba jest za mala sprobuj jeszcze raz: ";
			counter++;
			cin >> zgadywana;
			errorChecker = cin.fail();
			cin.clear();
			/// <summary>
			/// Zabezpiecznie przed zla liczba
			/// </summary>
			while (errorChecker == true) {
				cin.ignore(1000, '\n');
				cout << "Podaj prawidlowa liczbe: ";
				//cin.ignore(1000, '\n');
				cin >> zgadywana;
				errorChecker = cin.fail();
				cin.clear();
			}
			if (zgadywana > losowana) {
				cout << "Twoja liczba jest za duza sprobuj jeszcze raz: ";
				counter++;
				cin >> zgadywana;
				errorChecker = cin.fail();
				cin.clear();
				while (errorChecker == true) {
					cin.ignore(1000, '\n');
					cout << "Podaj prawidlowa liczbe: ";
					//cin.ignore(1000, '\n');
					cin >> zgadywana;
					errorChecker = cin.fail();
					cin.clear();
				}
			}
		}

		if (zgadywana == losowana) {
			cout << "Brawo zgadles za " << counter << " razem";

		}
	}
}
*/