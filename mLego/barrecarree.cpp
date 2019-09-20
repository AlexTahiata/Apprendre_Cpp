#include "barrecarree.h"
#include <iostream>

using namespace std;

BarreCarree::BarreCarree(string _reference, int _longueur, double _densite, string _nom,
                         int _longueurCarree):
    Barre(_reference, _longueur, _densite, _nom),
    longueurCarree(_longueurCarree)
{
    cout << "Constructeur de la classe BarreCarree" << endl;
    cout << "\n";

    cout << "Longueur du carrée : " << longueurCarree << " mm" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreCarree" << endl;
}

double BarreCarree::CalculSection()
{
    return longueurCarree * longueurCarree;
}

double BarreCarree::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
