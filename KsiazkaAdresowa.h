#include <iostream>
#ifndef KSIAZKAADRESOWA.h
#define KSIAZKAADRESOWA.h
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    Menu menu;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami), menu() {
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
                if(uzytkownikMenedzer.getIdZalogowanegoUzytkownika() != 0)
                {
                    switch(menu.wybierzOpcjeZMenuUzytkownika())
                    {
                    case '1':
                        adresatMenedzer.dodajAdresata(uzytkownikMenedzer.getIdZalogowanegoUzytkownika());
                        break;
                    case '4':

                        break;
                    case '8':
                        wylogujUzytkownika();
                        break;
                    }
                }
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
