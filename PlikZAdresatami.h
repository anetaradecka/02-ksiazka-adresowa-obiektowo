#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

#ifndef PLIKZADRESATAMI.h
#define PLIKZADRESATAMI.h

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {
        idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZPliku();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
    void wyswietlKontakty(int idZalogowanegoUzytkownika);

};

#endif // PLIKZADRESATAMI
