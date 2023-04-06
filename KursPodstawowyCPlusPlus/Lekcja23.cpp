/*danie domowe

    Napisz funkcj�, kt�ra b�dzie wczytywa�a liczby ze standardowego wej�cia i zwraca�a wczytan� warto��. Funkcja ma zagwarantowa�, �e zwracana liczba zawsze jest poprawna. Oznacza to, �e funkcja b�dzie musia�a pyta� u�ytkownika o wprowadzenie liczby dop�ki nie poda poprawnej.
    C/C++
    #include <iostream>
    int wczytajLiczbe()
    {
        //TODO: tu Tw�j kod
    }

    int main()
    {
        std::cout << "Podaj liczbe: ";
        int liczba = wczytajLiczbe();
        std::cout << "Podales liczbe: " << liczba << std::endl;
        return 0;
    }
    Zmodyfikuj kalkulator, kt�ry pisa�e� w jednym ze wcze�niejszych rozdzia��w tak, aby korzysta� on ze wcze�niej napisanej funkcji wczytajLiczbe.
    Napisz funkcj�, kt�ra losuje liczb� z przedzia�u od 50 do 60 w��cznie. Wywo�aj funkcj� kilka razy (wypisz wylosowane warto�ci na ekran) w celu przetestowania czy dzia�a ona poprawnie.
    Napisz funkcj�, kt�ra losuje liczb� z przedzia�u, kt�ry zostanie podany poprzez argumenty funkcji. Przetestuj funkcj� w poni�szy spos�b:
    C/C++
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    //... tu Tw�j kod
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
            cout << "podaj dzia�anie +,-,*,/ : " << endl;
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
                else (cout << "Nie wolno dzieli� przez 0");
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

