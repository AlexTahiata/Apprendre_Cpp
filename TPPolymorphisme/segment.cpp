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
