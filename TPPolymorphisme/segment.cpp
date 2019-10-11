#include "segment.h"

Segment::Segment(int _numero, int _vitesse, const double _longueur, const double _angle):
    Element(_numero, _vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur;
    cout << "    " << "A = " << angle;
    cout << "    " << "V = " << vitesse << endl;
}

double Segment::ObtenirLongueur()
{
    return longueur;

    //cout << "\nLongueur totale du parcours = " << longueurTotale << endl;
}

void Segment::ObtenirDuree()
{
    /*int duree;
    int vitesseTotale;
    vitesseTotale = leSegment.vitesse + leSegment2.vitesse;
    duree = (longueurTotale / vitesseTotale);

    cout << "Durée totale du parcours = " << duree << endl;*/
}

void Segment::ObtenirVecteurArivee()
{
    //x = longueur * cos(angle);
    //y = longueur * sin(angle);
}

