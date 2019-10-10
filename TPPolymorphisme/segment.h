#ifndef SEGMENT_H
#define SEGMENT_H
#include <iostream>
#include "element.h"

using namespace std;

class Segment : public Element
{
private:
    double longueur;
    double angle;
public:
    Segment(int _numero, int _vitesse, const double _longueur, const double _angle);
    void Afficher(); // fonction virtuel par héritage par rapport à la fonction Afficher() de la classe Element
};

#endif // SEGMENT_H
