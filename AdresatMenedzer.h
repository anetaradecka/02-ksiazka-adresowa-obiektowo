#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"

#ifndef ADRESATMENEDZER.h
#define ADRESATMENEDZER.h

using namespace std;

class AdresatMenedzer {
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

public:
    // czy NAZWA-pliku_Z_ADRESATAMI MA BYC TEZ CONST?
    AdresatMenedzer(string NAZWA_PLIKU_Z_ADRESATAMI, int idZalogowanegoUzytkownika) : plikZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void dodajAdresata();
    void usunAdresata();
    void edytujAdresata();
    void wyswietlKontakty();
};

#endif // ADRESATMENEDZER
