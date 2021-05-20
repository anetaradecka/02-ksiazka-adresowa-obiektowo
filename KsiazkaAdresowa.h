#include <iostream>
#ifndef KSIAZKAADRESOWA.h
#define KSIAZKAADRESOWA.h
#include "UzytkownikMenedzer.h"
#include "MenuUzytkownika.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    MenuUzytkownika menuUzytkownika;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), menuUzytkownika() {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();

        while(true) {
            switch (menuUzytkownika.wybierzOpcjeZMenuGlownego()) {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                logowanieUzytkownika();
                cout << "Id zalogowanego uzytkownika: " << uzytkownikMenedzer.getIdZalogowanegoUzytkownika() << endl;
                system("pause");
                break;
            case '3':
                wylogujUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        };
    }

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);

};
#endif // KSIAZKAADRESOWA
