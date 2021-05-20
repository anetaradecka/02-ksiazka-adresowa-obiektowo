#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Uzytkownik.h"
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

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    //znajdz poniższe funkcje w pliku strukt
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZPliku();
    void zapiszWszystkichAdresatowDoPliku(vector <Adresat> adresat);
};

#endif // PLIKZADRESATAMI
