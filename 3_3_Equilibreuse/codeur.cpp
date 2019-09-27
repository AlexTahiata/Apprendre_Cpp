#include "codeur.h"
#include "microdacqlite.h"
#include <iostream>

using namespace std;

Codeur::Codeur(MicroDacqLite & _laCarte):
    laCarte(_laCarte)
{
    cout << "Constructeur de la classe Codeur" << endl;
}
