/*Napisz program, który wylosuje 999 liczb ca³kowitych z zakresu od 4 do 10 w³¹cznie, wypisze te wartoœci na ekran, po czym zsumuje je i wynik wypisze na ekran. Wszelkie operacje maj¹ zostaæ zrealizowane w oparciu o funkcje. Tablica ma byæ zadeklarowana w funkcji main. Oczekiwane funkcje:

    Wype³nienie tablicy o podanym rozmiarze losowymi liczbami z przedzia³u podawanego przez argumenty funkcji.
    Sumowanie okreœlonej iloœci liczb znajduj¹cych siê w tablicy i zwrot wyniku.
    Wypisywanie zawartoœci tablicy.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using  namespace std;


		 
		 void  losowanie(int  tablica[]) {
			int tablicaLiczbLosowych[999];
			int temp;
			srand(time(NULL));
			
			
			
			for (int i = 0; i < 999; i++) {


				temp = (rand() % 6) + 4;

				tablicaLiczbLosowych[i] = (int)temp;

			}

			for (int i = 0; i < 999; i++) {
				cout << "liczba nr " << i << " to " << tablicaLiczbLosowych[i] << endl;
			}
			

		}

		 int sumowanie(int  tablica[]) {
			 int a = 0;
			 for (int x = 0; x < 999; x++) {
				 a = a + tablica[x];

		 }
			 cout << "Suma elementów tablicy to: " << a;
			 return a;
		 }

		 /*
		 int main() {
			 int tablica[999];
			 losowanie(tablica);
			 sumowanie(tablica);



			 return 0;
		 }
		 */

