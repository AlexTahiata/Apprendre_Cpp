#include "barrerondecreuse.h"
#include "barreronde.h"
#include <iostream>

using namespace std;

BarreRondeCreuse::BarreRondeCreuse(string _reference, int _longueur, double _densite, string _nom,
                                   int _diametre, double _pi,
                                   int _diametreInterieur):
    BarreRonde(_reference, _longueur, _densite, _nom, _diametre, _pi),
    diametreInterieur(_diametreInterieur)
{
    cout << "Constructeur de la classe BarreRondeCreuse" << endl;
    cout << "\n";

    cout << "Le diamètre intérieur est de : " << diametreInterieur << " mm2" << endl;
    cout << "\n";
}

BarreRondeCreuse::~BarreRondeCreuse()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreRondeCreuse" << endl;
}

double BarreRondeCreuse::CalculSection()
{
    return (pi * (diametre * diametre) / 4) - (pi * (diametreInterieur * diametreInterieur) / 4);
}

double BarreRondeCreuse::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
