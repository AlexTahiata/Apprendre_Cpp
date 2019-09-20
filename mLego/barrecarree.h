#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

using namespace std;

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, int _longueur, double _densite, string _nom,
                int _longueurCarree);
    ~BarreCarree();
    double CalculSection();
    double CalculerMasse();
protected:
    int longueurCarree;
    int section;
};

#endif // BARRECARREE_H
