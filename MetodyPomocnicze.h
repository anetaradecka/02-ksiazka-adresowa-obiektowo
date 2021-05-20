#include <iostream>
#include <sstream>
#include "Uzytkownik.h"

#ifndef METODYPOMOCNICZE.h
#define METODYPOMOCNICZE.h

using namespace std;

class MetodyPomocnicze
{
public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    static char wczytajZnak();
};

#endif // METODYPOMOCNICZE
