#include "Lodowka.h"
#include <fstream>

Lodowka::Lodowka()
{
    pobierz_zawartosc();
}

Lodowka::~Lodowka()
{
    //dtor
}

Lodowka::Co_robisz(int a)
{
    cout<<"Co chesz zrobic? "<<endl;
    cout<<"1. Pokarz zawartosc lodowki"<<endl;
    cout<<"2. Dodaj jedzenie"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
}

Lodowka::pobierz_zawartosc()
{
    fstream plik;
    plik.open("zawatrosc.txt",ios::in);
    if(!plik.good()) cout<<"Blad otwarcia pliku"<<endl;

    string rodzaj;
    string nazwa;
    string data_przydatnosci;
    int warosc_kaloryczna;
    string nazwa_jedzenia;

    while (plik>>rodzaj)
    {
        if(rodzaj == nabial)
        {

        }
    }
}
