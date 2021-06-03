#include <iostream>
#ifndef KSIAZKAADRESOWA.h
#define KSIAZKAADRESOWA.h
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    Menu menu;

    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
     : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), menu() {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        adresatMenedzer = NULL;

        while (true) {
            switch (menu.wybierzOpcjeZMenuGlownego()) {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                logowanieUzytkownika();

                if (uzytkownikMenedzer.getIdZalogowanegoUzytkownika() != 0)
                {
                    bool kontynuuj = true;

                    while (kontynuuj == true) {
                        switch(menu.wybierzOpcjeZMenuUzytkownika())
                        {
                        case '1':
                            adresatMenedzer->dodajAdresata();
                            break;
                        case '2':
                            // TODO: wyszukaj adresata po imieniu
                            break;
                        case '3':
                            // TODO: wyszukaj adresata po nazwisku
                            break;
                        case '4':
                            adresatMenedzer->wyswietlKontakty();
                            break;
                        case '8':
                            kontynuuj = false;
                            wylogujUzytkownika();
                            break;
                        }
                    }
                }
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
    };
    ~KsiazkaAdresowa()
    {
       delete adresatMenedzer;
       adresatMenedzer = NULL;
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    // Można usunąć wypisywanie użytkowników
    void wypiszWszystkichUzytkownikow();
    void wylogujUzytkownika();


};
#endif // KSIAZKAADRESOWA
