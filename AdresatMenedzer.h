#include <iostream>
#include <vector>
#include <algorithm>
#include "Adresat.h"
#include "PlikZAdresatami.h"

#ifndef ADRESATMENEDZER.h
#define ADRESATMENEDZER.h

using namespace std;

class AdresatMenedzer {
    vector <Adresat> adresaci;
    const string nazwaPlikuZAdresatami;
    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;
    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = 0;
    };
    void ustawAdresaci(vector <Adresat> adresaci);
    vector <Adresat> pobierzAdresaci();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void dopiszAdresataDoPliku(Adresat adresat);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
};

#endif // ADRESATMENEDZER
