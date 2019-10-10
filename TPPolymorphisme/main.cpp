#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"
#include "vecteur.h"

using namespace std;

int main()
{
    Trajectoire laTrajectoire(0);

    Segment leSegment(0, 3, 9, 0);

    Segment leSegment2(0, 1, 5, 0.927295);

    Vecteur<int> v1(9,0);
    Vecteur<int> v2(12,4);

    laTrajectoire.Afficher();

    laTrajectoire.Ajouter(&leSegment);
    leSegment.Afficher();
    v1.Afficher();

    laTrajectoire.Ajouter(&leSegment2);
    leSegment2.Afficher();
    v2.Afficher();

    return 0;
}
