/* Napisz program, który wczyta 3 liczby podane przez u¿ytkownika do tablicy, a nastêpnie wylosuje 2 z nich bez powtórzeñ. Wynik wypisz na ekran. Postaraj siê napisaæ ten program w oparciu o funkcje.

Uwaga!
Treœæ niniejszego rozdzia³u nie zawiera rozwi¹zania problemu lecz wskazówki - zadanie wymaga przede wszystkim zastanowienia siê i przeprowadzenia szczegó³owej analizy problemu do konkretnego przypadku przedstawionego w zadaniu. Zadanie nie wymaga wiêkszej wiedzy z zakresu programowania ni¿ ta, która zosta³a przedstawiona do tej pory.

2. Zmodyfikuj program z pierwszego zadania tak, aby u¿ytkownik musia³ podaæ 10 liczb, a 8 z nich bêdzie losowanych bez powtórzeñ. SprawdŸ czy wyniki s¹ poprawne.*/




#include <cstdlib>
#include <iostream>
#include <ctime>
using  namespace std;



int   wczytajLiczbê() {
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
		

		while (counter < 10) {    //za³atwia dodawanie liczb niepowtarzaj¹cych siê od u¿ytkownika
			cout<<"counter= " << counter << endl;
			x = wczytajLiczbê();
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


















