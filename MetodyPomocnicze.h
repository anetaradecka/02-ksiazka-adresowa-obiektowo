#include <iostream>
#include <sstream>
#include <algorithm>

#include "Uzytkownik.h"
#include "Adresat.h"

#ifndef METODYPOMOCNICZE.h
#define METODYPOMOCNICZE.h

using namespace std;

class MetodyPomocnicze
{
public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    static string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    static char wczytajZnak();
};

#endif // METODYPOMOCNICZE
