#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI  , uzytkownikMenedzer.getIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
}

void KsiazkaAdresowa::wyswietlMenu()
{
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
                            // TODO: edytuj addresata
                            break;
                        case '4':
                            adresatMenedzer->wyswietlKontakty();
                            break;
                        case '5':
                            adresatMenedzer->usunAdresata();
                            break;
                        case '6':
                            adresatMenedzer->edytujAdresata();
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
}

