/*Napisz program, kt�ry wylosuje 999 liczb ca�kowitych z zakresu od 4 do 10 w��cznie, wypisze te warto�ci na ekran, po czym zsumuje je i wynik wypisze na ekran. Wszelkie operacje maj� zosta� zrealizowane w oparciu o funkcje. Tablica ma by� zadeklarowana w funkcji main. Oczekiwane funkcje:

    Wype�nienie tablicy o podanym rozmiarze losowymi liczbami z przedzia�u podawanego przez argumenty funkcji.
    Sumowanie okre�lonej ilo�ci liczb znajduj�cych si� w tablicy i zwrot wyniku.
    Wypisywanie zawarto�ci tablicy.*/

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
			 cout << "Suma element�w tablicy to: " << a;
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

