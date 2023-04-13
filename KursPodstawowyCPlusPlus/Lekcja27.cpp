/*    Napisz sumowanie liczb pêtl¹ do...while
     dzia³aj¹ce tak samo jak sumowanie wykonane za pomoc¹ pêtli for
    , które zosta³o przedstawione w niniejszym rozdziale.
    Napisz program, który za pomoc¹ pêtli for
     wype³ni 20 elementow¹ tablicê nastêpuj¹cym ci¹giem liczb: {1, 6, 11, ... , (1 + n*5)}. Zawartoœæ wype³nionej tablicy wypisz na ekran.
    Napisz program który wykona wszystkie poni¿sze kroki w podanej kolejnoœci:
        Losuje 10 liczb z przedzia³u od 10 do 30 w³¹cznie i zapisuje je do tablicy;
        Wypisuje 10 wylosowanych liczb od pocz¹tku do koñca;
        Wypisuje 10 wylosowanych liczb od koñca do pocz¹tku;
        Znajduje najmniejsz¹ oraz najwiêksz¹ wylosowan¹ liczbê.
        Wypisuje najmniejsz¹ i najwiêksz¹ wylosowan¹ liczbê.
    Program nie mo¿e u¿ywaæ pêtli innych ni¿ pêtla for
    .

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


//za pomoc¹ pêtli for
//wype³ni 20 elementow¹ tablicê nastêpuj¹cym ci¹giem liczb : {1, 6, 11, ..., (1 + n * 5)}. Zawartoœæ wype³nionej tablicy wypisz na ekran.



void wypelnianie(int tablica[]) {
    cout << "tabel wype³niona ciagiem (1 + n*5)" << endl;;
    int temp=0;
    for (int i = 0; i < 20; i++) {
        temp = (1 + i * 5);
        tablica[i] = temp;
        cout << "--------------------------------------------" << endl;
        cout << "Pozycja " << i + 1 << " twojej tablicy to: " << tablica[i] << endl;
        cout << "--------------------------------------------" << endl;
    }
}


//Napisz sumowanie liczb pêtl¹ do...while
//dzia³aj¹ce tak samo jak sumowanie wykonane za pomoc¹ pêtli for

int sumowanie(int tablica[], int x) {
    int counter = 0;
    int sum = 0;
    
        do {
            sum = sum + tablica[counter];
            counter++;
        }
        while (counter <= x);
            cout << "--------------------------------------------" << endl;
            cout << "Suma tablicy to: " << sum << endl;
            cout << "--------------------------------------------" << endl;
        return sum;
}


void losowanieLiczb(int odLiczby, int doLiczby, int ileLiczb, int tablica[]) {

    for (int i = 0; i < ileLiczb; i++) {
        tablica[i] = rand() %(doLiczby - odLiczby) + doLiczby;
    }
    cout << " Wylosowane liczby w kolejnoœci to: " << endl;
    for (int i = 0; i < ileLiczb; i++) {
        cout << tablica[i] << ","<<endl;
    }
    cout << " Wylosowane liczby w odwrotnej kolejnoœci to: " << endl;
    for (int i = ileLiczb - 1; i > -1; i--) {
        cout << tablica[i] << ", "<<endl;
    }
    int max=0;
    int min=0;
    int temp=0;
    for (int i = 0; i < ileLiczb-1; i++) {
        temp = tablica[i] - tablica[i + 1];
            if (temp < 0) {
                min = tablica[i + 1];
            }
            if (temp >= 0) {
                max = tablica[i];
            }
            
    }
    cout << endl;
    cout << "najmniejsza liczba to: " << min << endl;
    cout << "--------------------------------------------" << endl;
    cout << "najwieksza liczba to: " << max << endl;
    cout << "--------------------------------------------" << endl;

}


int main() {
    int tablica20[20];
    int tablica[10];

    wypelnianie(tablica20);
    sumowanie(tablica20, 10);
    losowanieLiczb(10,30,10, tablica);

    cout << "----------------Koniec programu-------------------";

    return 0;
}
*/