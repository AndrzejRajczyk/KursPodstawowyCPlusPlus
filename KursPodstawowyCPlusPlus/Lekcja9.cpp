#include <iostream>
int main()
{
    bool wynik = false && false;
    std::cout << "wynik (false && false) = " << wynik << std::endl;
    wynik = false && true;
    std::cout << "wynik (false && true) = " << wynik << std::endl;
    wynik = true && true;
    std::cout << "wynik (true && true) = " << wynik << std::endl;
    bool a = false;
    bool b = false;
    wynik = a && b && true;
    std::cout << "wynik (a && b && true) = " << wynik << std::endl;
    bool c = false;
    std::cout << "(a&&b&&c) = " << (a && b && c) << std::endl;
    b = true;
    std::cout << "(a&&b&&c) = " << (a && b && c) << std::endl;
    std::cout << "(a&& !b &&c) = " << (a && !b && c) << std::endl;
    std::cout << "(!a && b && !c) = " << (!a && b && !c) << std::endl;
    return 0;
}