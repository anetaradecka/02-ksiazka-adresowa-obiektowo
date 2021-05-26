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
        adresatMenedzer.wczytajAdresatowZPliku();

        while (true) {
            switch (menu.wybierzOpcjeZMenuGlownego()) {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                logowanieUzytkownika();
                cout << "Id zalogowanego uzytkownika: " << uzytkownikMenedzer.getIdZalogowanegoUzytkownika() << endl << endl;
                system("pause");

                if (uzytkownikMenedzer.getIdZalogowanegoUzytkownika() != 0)
                {
                    char wybranaOpcjaZMenuUzytkownika;

                    while (wybranaOpcjaZMenuUzytkownika != '8') {
                        wybranaOpcjaZMenuUzytkownika = menu.wybierzOpcjeZMenuUzytkownika();

                        switch(wybranaOpcjaZMenuUzytkownika)
                        {
                        case '1':
                            adresatMenedzer.dodajAdresata(uzytkownikMenedzer.getIdZalogowanegoUzytkownika());
                            break;
                        case '2':
                            // TODO: wyszukaj adresata po imieniu
                            break;
                        case '3':
                            // TODO: wyszukaj adresata po nazwisku
                            break;
                        case '4':
                            // TODO: wyswietl wszystkich adresatow
                            break;
                        }

                        // uzytkownik wybral opcje '8', dlatego nastepuje wylogowanie
                        wylogujUzytkownika();
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
