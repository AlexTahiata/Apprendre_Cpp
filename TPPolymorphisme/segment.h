/**
  * @file       segment.h
  * @brief      Déclaration de la classe Segment
  * @version    1.1
  * @author     Alex TAHIATA
  * @date       11 oct 2019
  */

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
    double ObtenirLongueur();
    void ObtenirDuree();
    void ObtenirVecteurArivee();
};

#endif // SEGMENT_H
