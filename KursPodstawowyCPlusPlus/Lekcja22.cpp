/*oim zadaniem domowym jest napisanie prostej gry, która ma dzia³aæ nastêpuj¹co:
1. Program losuje liczbê z przedzia³u od 1 do 1000.
2. U¿ytkownik zgaduje liczbê, która zosta³a wylosowana.
3. Je¿eli podana liczba jest za du¿a (za ma³a) gra wypisuje stosowny komunikat i powraca do kroku 2.
4. Je¿eli gracz trafi liczbê wylosowan¹ to progam koñczy dzia³anie, wypisuj¹c na ekran wylosowan¹ liczbê oraz liczbê 'strza³ów', które odda³ gracz.
Gra ma byæ zabezpieczona przed mo¿liwoœci¹ wprowadzenia b³êdnych wartoœci liczbowych.*/

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