#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"

using namespace std;

int main()
{
    cout << "Trajectoire : \n" << endl;

    Segment leSegment(9, 0);
    leSegment.Afficher();

    Segment leSegment2(5, 0.927295);
    leSegment2.Afficher();

    return 0;
}
