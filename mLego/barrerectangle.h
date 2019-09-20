#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

using namespace std;

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _reference, int _longueur, float _densite, string _nom,
                   int _longueurCercle, int _largeurCercle);
    ~BarreRectangle();
    double CalculSection();
    double CalculerMasse();
private:
    int longueurCercle;
    int largeurCercle;
};

#endif // BARRERECTANGLE_H
