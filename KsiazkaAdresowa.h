#include <iostream>
#ifndef KSIAZKAADRESOWA.h
#define KSIAZKAADRESOWA.h
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    Menu menu;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    void wyswietlMenu();

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
     : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), menu() {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        adresatMenedzer = NULL;
        wyswietlMenu();
    };

    ~KsiazkaAdresowa()
    {
       delete adresatMenedzer;
       adresatMenedzer = NULL;
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    // Można usunąć wypisywanie użytkowników
    void wypiszWszystkichUzytkownikow();
    void wylogujUzytkownika();


};
#endif // KSIAZKAADRESOWA
