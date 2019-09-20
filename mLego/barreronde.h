#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

using namespace std;

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, int _longueur, double _densite, string _nom,
               int _diametre, double _pi);
    ~BarreRonde();
    double CalculSection();
    double CalculerMasse();
protected:
    int diametre;
    double pi;
    double section;
    //double masse;
};

#endif // BARRERONDE_H
