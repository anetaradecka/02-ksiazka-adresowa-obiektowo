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
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    void dopiszAdresataDoPliku(Adresat adresat);
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
};

#endif // PLIKZADRESATAMI
