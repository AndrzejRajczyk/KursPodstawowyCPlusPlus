#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// tavlica 999 elementowa jest za du za i wywala b³¹d przepelnienie stosu dla mniejszych wartoœci dzia³a OK

void losowanie() {
	int tablicaLiczbLosowych[999];
	int temp;
	srand(time(NULL));
	for (int i = 0; i <1000; i++) {

		
		temp = (rand() % 7) + 4;
		
		tablicaLiczbLosowych[i] = (int)temp;

	}

	for (int i = 0; i < 1000; i++) {
		cout <<"liczba nr " << i << " to "<< tablicaLiczbLosowych[i] << endl;
	}

}


/*
int main() {

	losowanie();
	return 0;
}
*/