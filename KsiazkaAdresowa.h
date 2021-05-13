#include <iostream>
#ifndef KSIAZKAADRESOWA.h
#define KSIAZKAADRESOWA.h

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

};

#endif // KSIAZKAADRESOWA
