#include "barreronde.h"
#include <iostream>

using namespace std;

BarreRonde::BarreRonde(string _reference, int _longueur, double _densite, string _nom,
                       int _diametre, double _pi):
    Barre(_reference, _longueur, _densite, _nom),
    diametre(_diametre),
    pi(_pi)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
    cout << "\n";

    cout << "Le diamètre                         : " << diametre << "mm" << endl;
    cout << "Pi                                  : " << pi << endl;
}

BarreRonde::~BarreRonde()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreRonde" << endl;
}

double BarreRonde::CalculSection()
{
    return pi * (diametre * diametre) / 4;

    //return section;
}

double BarreRonde::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
