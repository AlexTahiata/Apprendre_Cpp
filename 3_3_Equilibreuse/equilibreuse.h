#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include "moteur.h"
#include "codeur.h"
#include "microdacqlite.h"

class Equilibreuse
{
public:
    Equilibreuse();
    ~Equilibreuse();
private:
    MicroDacqLite laCarte;
    Moteur *leMoteur;
    Codeur *leCodeur;
};

#endif // EQUILIBREUSE_H
