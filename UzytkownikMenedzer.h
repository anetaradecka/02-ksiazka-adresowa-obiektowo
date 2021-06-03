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
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;

    bool czyIstniejeLogin(string login);
    int pobierzIdNowegoUzytkownika();
    Uzytkownik podajDaneNowegoUzytkownika();

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){
        idZalogowanegoUzytkownika = 0;
    };
    bool czyUzytkownikJestZalogowany();
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void wylogujUzytkownika();
    void wczytajUzytkownikowZPliku();
    int getIdZalogowanegoUzytkownika();
    // Można usunąć wypisywanie wszystkich użytkowników
    void wypiszWszystkichUzytkownikow();
};

#endif // UZYTKOWNIKMENEDZER
