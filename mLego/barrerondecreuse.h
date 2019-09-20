/**
  * @file       BarreRondeCreuse.h
  * @brief      Définition de la classe BarreRondeCreuse
  */

#ifndef BARRERONDECREUSE_H
#define BARRERONDECREUSE_H
#include "barreronde.h"

using namespace std;

class BarreRondeCreuse : public BarreRonde
{
public:
    BarreRondeCreuse(string _reference, int _longueur, double _densite, string _nom,
                     int _diametre, double _pi,
                     int _diametreInterieur);
    ~BarreRondeCreuse();
    double CalculSection();
    double CalculerMasse();
private:
    int diametreInterieur;
};

#endif // BARRERONDECREUSE_H
