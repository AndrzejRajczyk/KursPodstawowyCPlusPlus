/*    Napisz sumowanie liczb p�tl� do...while
     dzia�aj�ce tak samo jak sumowanie wykonane za pomoc� p�tli for
    , kt�re zosta�o przedstawione w niniejszym rozdziale.
    Napisz program, kt�ry za pomoc� p�tli for
     wype�ni 20 elementow� tablic� nast�puj�cym ci�giem liczb: {1, 6, 11, ... , (1 + n*5)}. Zawarto�� wype�nionej tablicy wypisz na ekran.
    Napisz program kt�ry wykona wszystkie poni�sze kroki w podanej kolejno�ci:
        Losuje 10 liczb z przedzia�u od 10 do 30 w��cznie i zapisuje je do tablicy;
        Wypisuje 10 wylosowanych liczb od pocz�tku do ko�ca;
        Wypisuje 10 wylosowanych liczb od ko�ca do pocz�tku;
        Znajduje najmniejsz� oraz najwi�ksz� wylosowan� liczb�.
        Wypisuje najmniejsz� i najwi�ksz� wylosowan� liczb�.
    Program nie mo�e u�ywa� p�tli innych ni� p�tla for
    .

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


//za pomoc� p�tli for
//wype�ni 20 elementow� tablic� nast�puj�cym ci�giem liczb : {1, 6, 11, ..., (1 + n * 5)}. Zawarto�� wype�nionej tablicy wypisz na ekran.



void wypelnianie(int tablica[]) {
    cout << "tabel wype�niona ciagiem (1 + n*5)" << endl;;
    int temp=0;
    for (int i = 0; i < 20; i++) {
        temp = (1 + i * 5);
        tablica[i] = temp;
        cout << "--------------------------------------------" << endl;
        cout << "Pozycja " << i + 1 << " twojej tablicy to: " << tablica[i] << endl;
        cout << "--------------------------------------------" << endl;
    }
}


//Napisz sumowanie liczb p�tl� do...while
//dzia�aj�ce tak samo jak sumowanie wykonane za pomoc� p�tli for

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
    cout << " Wylosowane liczby w kolejno�ci to: " << endl;
    for (int i = 0; i < ileLiczb; i++) {
        cout << tablica[i] << ","<<endl;
    }
    cout << " Wylosowane liczby w odwrotnej kolejno�ci to: " << endl;
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