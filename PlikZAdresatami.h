#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

#ifndef PLIKZADRESATAMI.h
#define PLIKZADRESATAMI.h

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;

    bool czyPlikJestPusty(fstream &plikTekstowy);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);


public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {
        idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void dodajAdresata(int idZalogowanegoUzytkownika);
    int usunAdresata(int idZalogowanegoUzytkownika);
    void edytujAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
    void wyswietlKontakty(int idZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuEdycja();
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    void wyszukajAdresatowPoImieniu(int idZalogowanegoUzytkownika);
    void wyszukajAdresatowPoNazwisku(int idZalogowanegoUzytkownika);
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void aktualizujIdOstatniegoAdresata();
    vector <Adresat> wczytajWszystkichAdresatowZPliku();

};

#endif // PLIKZADRESATAMI
