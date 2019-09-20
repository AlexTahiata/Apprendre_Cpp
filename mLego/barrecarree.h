#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

using namespace std;

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, int _longueur, float _densite, string _nom,
                int _carree);
    ~BarreCarree();
    double CalculSection();
    double CalculerMasse();
private:
    int longueurCarree;
    int section;
};

#endif // BARRECARREE_H
