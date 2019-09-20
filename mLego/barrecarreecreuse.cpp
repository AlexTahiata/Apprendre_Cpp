#include "barrecarreecreuse.h"
#include "barrecarree.h"
#include <iostream>

BarreCarreeCreuse::BarreCarreeCreuse(string _reference, int _longueur, double _densite, string _nom,
                                     int _longueurCarree,
                                     int _coteInterieur):
    BarreCarree (_reference, _longueur, _densite, _nom, _longueurCarree),
    coteInterieur(_coteInterieur)
{
    cout << "Constructeur de la classe BarreCarreeCreuse" << endl;
    cout << "\n";

    cout << "La côte intérieur du carrée est : " << coteInterieur << " mm" << endl;
}

BarreCarreeCreuse::~BarreCarreeCreuse()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreCarreeCreuse" << endl;
}

double BarreCarreeCreuse::CalculSection()
{
    return (longueurCarree * longueurCarree) - (coteInterieur * coteInterieur);
}

double BarreCarreeCreuse::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
