/*danie domowe

    Napisz funkcjê, która bêdzie wczytywa³a liczby ze standardowego wejœcia i zwraca³a wczytan¹ wartoœæ. Funkcja ma zagwarantowaæ, ¿e zwracana liczba zawsze jest poprawna. Oznacza to, ¿e funkcja bêdzie musia³a pytaæ u¿ytkownika o wprowadzenie liczby dopóki nie poda poprawnej.
    C/C++
    #include <iostream>
    int wczytajLiczbe()
    {
        //TODO: tu Twój kod
    }

    int main()
    {
        std::cout << "Podaj liczbe: ";
        int liczba = wczytajLiczbe();
        std::cout << "Podales liczbe: " << liczba << std::endl;
        return 0;
    }
    Zmodyfikuj kalkulator, który pisa³eœ w jednym ze wczeœniejszych rozdzia³ów tak, aby korzysta³ on ze wczeœniej napisanej funkcji wczytajLiczbe.
    Napisz funkcjê, która losuje liczbê z przedzia³u od 50 do 60 w³¹cznie. Wywo³aj funkcjê kilka razy (wypisz wylosowane wartoœci na ekran) w celu przetestowania czy dzia³a ona poprawnie.
    Napisz funkcjê, która losuje liczbê z przedzia³u, który zostanie podany poprzez argumenty funkcji. Przetestuj funkcjê w poni¿szy sposób:
    C/C++
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    //... tu Twój kod
    int main()
    {
        srand( time( NULL ) );
        int start;
        std::cin >> start;
        int stop;
        std::cin >> stop;
        int ile = 20;
        do
        {
            std::cout << wylosuj( start, stop ) << std::endl;
            ile--;
        } while( ile > 0 );
       
        return 0;
    }
    ______________________________________________________________________________________________________________
Poprzedni dokument*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int wczytajLiczbe()
{
    int x;
    bool errorChecker = true;
    do  {
        cout << "podaj liczbe :" << endl;
        cin >> x;
        errorChecker = cin.fail();
        cin.clear();
        cin.ignore(1000, '\n');
       
    } while (errorChecker == true);
    return x;
}
    

void dzialanie(int x, int y) {
    char dzialanie;
        bool errorChecker = true;
        do {
            cout << "podaj dzia³anie +,-,*,/ : " << endl;
            cin >> dzialanie;
            errorChecker = cin.fail();
            cin.clear();
            cin.ignore(1000, '\n');
        } while (errorChecker == true || ( dzialanie != '+' && dzialanie != '-' && dzialanie != '*' && dzialanie != '/'));
        




        switch (dzialanie) {
            case '+':
            cout << "Wynik= " << x + y;
            break;
            case '-':
                cout << "Wynik= " << x - y;
                break;
            case '*':
                cout << "Wynik = " << x * y;
                break;
            case '/':
                if (y != 0) {
                    cout << "wynik = " << (float)x / y;
                }
                else (cout << "Nie wolno dzieliæ przez 0");
                break;
            default:
                cout<< "Nie podales wlascowego dzialania: ";
                break;

        }
    }

void randomizeNumber(int x, int y) {
    cout << endl;
    srand(time(nullptr));
    int result  = (rand() % (x-y)) + y;
    
    cout << "losowa liczba z zakresu od " << y << " do x " << x << " to " << result << endl;
}




int main() {
    int x;
    int y;
    

   x =  wczytajLiczbe();
   y =  wczytajLiczbe();
    dzialanie(x,y);
    randomizeNumber(x,y);
    srand(time(NULL));
    randomizeNumber(x,y);
    srand(time(NULL));
    randomizeNumber(x,y);
    srand(time(NULL));
    randomizeNumber(x,y);
    srand(time(NULL));
    randomizeNumber(60,50);






}

