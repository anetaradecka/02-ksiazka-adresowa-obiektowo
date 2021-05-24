#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();

int main()
{

    //int idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(1);
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownik.txt", "Adresaci.txt");
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.logowanieUzytkownika();


    return 0;
}

