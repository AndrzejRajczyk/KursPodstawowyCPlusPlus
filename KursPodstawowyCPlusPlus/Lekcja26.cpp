/* Napisz program, kt�ry wczyta 3 liczby podane przez u�ytkownika do tablicy, a nast�pnie wylosuje 2 z nich bez powt�rze�. Wynik wypisz na ekran. Postaraj si� napisa� ten program w oparciu o funkcje.

Uwaga!
Tre�� niniejszego rozdzia�u nie zawiera rozwi�zania problemu lecz wskaz�wki - zadanie wymaga przede wszystkim zastanowienia si� i przeprowadzenia szczeg�owej analizy problemu do konkretnego przypadku przedstawionego w zadaniu. Zadanie nie wymaga wi�kszej wiedzy z zakresu programowania ni� ta, kt�ra zosta�a przedstawiona do tej pory.

2. Zmodyfikuj program z pierwszego zadania tak, aby u�ytkownik musia� poda� 10 liczb, a 8 z nich b�dzie losowanych bez powt�rze�. Sprawd� czy wyniki s� poprawne.*/




#include <cstdlib>
#include <iostream>
#include <ctime>
using  namespace std;



int   wczytajLiczb�() {
	int a;
	bool check = true;


	do {
		cout << "Podaj liczbe: ";
		cin >> a;
		check = cin.fail();
		cin.clear();
		cin.ignore(1000, '\n');
		if (check == false) {
			return a;
		}
	} while (check == true);
	return a;
}

int (liczbyDoTabeli)(int tabelaUzera[], int counter, int a) {
	bool chcecker = true;
	if (counter == 0) {
		tabelaUzera[0] = a;
		
	}

	if (counter != 0) {
		int temp;
		for (int i = 0; i < counter; i++) {
			
			temp = tabelaUzera[i] - a;

			if (temp ==0) {
				return counter-1;
			}
			

		}
		tabelaUzera[counter] = a;
		

	
	
	}
	return counter+1;
	
	}





int losowanieLiczby(int tabelaUzera[], int tablicaLosowana[]) {
	int x;
	


	x = rand() % 9;
	x = tabelaUzera[x];
	return x;
}
	


	



	int main() {


		int tablicaLiczb[10];
		int tablicaLosowana[8];
		int counter = 0;
		int x;
		srand(time(NULL));
		

		while (counter < 10) {    //za�atwia dodawanie liczb niepowtarzaj�cych si� od u�ytkownika
			cout<<"counter= " << counter << endl;
			x = wczytajLiczb�();
			counter=liczbyDoTabeli(tablicaLiczb, counter, x);
			
			

			
			
			
		}
		
		for (int i = 0; i < 10; i++) {
			cout << "Twoje liczby to: " << tablicaLiczb[i] << endl;
		}

		counter = 0;
		
		while (counter < 8) {
			x = losowanieLiczby(tablicaLiczb, tablicaLosowana);
			counter = liczbyDoTabeli(tablicaLosowana, counter, x);
			
		}
		for (int i = 0; i < 8; i++) {
			cout << "Wylosowane  liczby to: " << tablicaLosowana[i] << endl;
		}


		return 0;
	}


















