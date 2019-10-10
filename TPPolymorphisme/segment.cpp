#include "segment.h"

Segment::Segment(const double _longueur, const double _angle):
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur;
    cout <<"    "<< "A = " << angle << endl;
}
