#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"

#ifndef UZYTKOWNIKMENEDZER.h
#define UZYTKOWNIKMENEDZER.h

using namespace std;

class UzytkownikMenedzer {
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
};

#endif // UZYTKOWNIKMENEDZER
