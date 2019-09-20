/**
  * @file       BarreCarreeCreuse.h
  * @brief      Définition de la classe BarreCarreeCreuse
  */

#ifndef BARRECARREECREUSE_H
#define BARRECARREECREUSE_H
#include "barrecarree.h"

using namespace std;

class BarreCarreeCreuse : public BarreCarree
{
public:
    BarreCarreeCreuse(string _reference, int _longueur, double _densite, string _nom,
                      int _carree,
                      int _coteInterieur);
    ~BarreCarreeCreuse();
    double CalculSection();
    double CalculerMasse();
private:
    int coteInterieur;
};

#endif // BARRECARREECREUSE_H
