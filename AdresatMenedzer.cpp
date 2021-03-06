#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"


void AdresatMenedzer::dodajAdresata()
{
    plikZAdresatami.dodajAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatMenedzer::usunAdresata()
{
    plikZAdresatami.usunAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    plikZAdresatami.aktualizujIdOstatniegoAdresata();
}

void AdresatMenedzer::edytujAdresata()
{
    plikZAdresatami.edytujAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

bool AdresatMenedzer::czyPlikJestPusty(fstream &plikTekstowy) {
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}

void AdresatMenedzer::wyswietlKontakty()
{
    plikZAdresatami.wyswietlKontakty(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatMenedzer::wyszukajAdresatowPoImieniu()
{
    plikZAdresatami.wyszukajAdresatowPoImieniu(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatMenedzer::wyszukajAdresatowPoNazwisku()
{
    plikZAdresatami.wyszukajAdresatowPoNazwisku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatMenedzer::aktualizujIdOstatniegoAdresata()
{
    plikZAdresatami.aktualizujIdOstatniegoAdresata();
}

