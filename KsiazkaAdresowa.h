#include <iostream>
#ifndef KSIAZKAADRESOWA.h
#define KSIAZKAADRESOWA.h
#include "UzytkownikMenedzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    Menu menu;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), menu() {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();

        while(true) {
            switch (menu.wybierzOpcjeZMenuGlownego()) {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                logowanieUzytkownika();
                cout << "Id zalogowanego uzytkownika: " << uzytkownikMenedzer.getIdZalogowanegoUzytkownika() << endl << endl;
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
