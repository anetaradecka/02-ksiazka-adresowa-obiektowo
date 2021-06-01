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

public:
    AdresatMenedzer(string NAZWA_PLIKU_Z_ADRESATAMI) : plikZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI) {};
    void wczytajAdresatowZPliku();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void wyswietlKontakty(int idZalogowanegoUzytkownika);
};

#endif // ADRESATMENEDZER
