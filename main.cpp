#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownik.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
