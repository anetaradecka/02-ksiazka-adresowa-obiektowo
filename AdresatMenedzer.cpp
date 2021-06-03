#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"


void AdresatMenedzer::dodajAdresata()
{
    plikZAdresatami.dodajAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
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
