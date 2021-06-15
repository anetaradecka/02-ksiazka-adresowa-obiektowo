#include <iostream>
#include <sstream>
#include <fstream>
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
    static int konwersjaStringNaInt(string liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    static string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    static char wczytajZnak();
    static bool czyPlikJestPusty(fstream &plikTekstowy);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int wczytajLiczbeCalkowita();
};

#endif // METODYPOMOCNICZE
