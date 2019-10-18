#include <iostream>
#include "alveoleslibres.h"

using namespace std;

int main()
{
    cout << "TEST" << endl;
    unsigned int rangee,colonne;
    AlveolesLibres lesAlveolesLibre(4,4);
    lesAlveolesLibre.Visualiser();

    for(int i=0;i<16;i++){
        lesAlveolesLibre.Reserver(rangee,colonne);
        cout << "Emplacement Reservé :(" << rangee << " , " << colonne << ")\n";
    }
    lesAlveolesLibre.Liberer(4,2);
    lesAlveolesLibre.Visualiser();

    lesAlveolesLibre.Visualiser();

    cout << "test classe Rouleau" << endl;
    return 0;
}
