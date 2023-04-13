
using namespace std;
#include <iostream>
#include <cstdlib>
#include <string>
#include <climits>

void wczytajOsobe(string & imie, string & nazwisko, int & wiek) {
    cout << "Podaj imie i nazwisko"<< endl;
    cin >> imie >> nazwisko;
    do {
        cin.clear();
        cin.ignore(numeric_limits < streamsize >::max(), '\n');
        cout << "Podaj wiek" << endl;;
        cin >> wiek;
    } while (cin.fail());
}
 

    void wypiszOsobe(string  imie, string  nazwisko, int  wiek) {
        cout << "Twoja osoba to: " << imie << " " << nazwisko << " " << wiek;
    }



    int main() {
        string imie[2];
        string nazwisko[2];
        int wiek[2];
        for (int i = 0; i < 2; i++) {
            wczytajOsobe(imie[i], nazwisko[i], wiek[i]);
            cout << imie[i];
        }
    

        for (int i = 0; i < 2; i++) {
            wypiszOsobe(imie[i], nazwisko[i], wiek[i]);
        }

    return 0;
}
