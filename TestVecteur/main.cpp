#include <iostream>
#include "Vecteur.h"

using namespace std;

int main()
{

    Vecteur<int> v1(4,5);
    Vecteur<int> v2(10,8);

    v1 = v1 + v2;

    return 0;
}
