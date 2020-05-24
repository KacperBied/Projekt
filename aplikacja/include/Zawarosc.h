#ifndef ZAWAROSC_H
#define ZAWAROSC_H

#include <vector>
#include <fstream>
class Zawarosc:public Lodowka;
{
    public:
        Zawarosc();
        virtual ~Zawarosc();
        void dodaj_do_zawartosci();

    string nazwa;
    string rodzaj;
    string data_przydatnosci;
    int warosc_kaloryczna;
    string nazwa_jedzenia;

    vector<string> jedzenie;


    protected:

    private:
};

#endif // ZAWAROSC_H
