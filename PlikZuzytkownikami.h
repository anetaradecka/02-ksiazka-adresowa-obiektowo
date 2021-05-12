#include <iostream>
#include <vector>
#include <fstream>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

#ifndef PLIKZUZYTKOWNIKAMI.h
#define PLIKZUZYTKOWNIKAMI.h

using namespace std;

class PlikZuzytkownikami
{
    string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    PlikZuzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
};

#endif // PLIKZUZYTKOWNIKAMI
