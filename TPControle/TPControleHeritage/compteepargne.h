#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "compte.h"


class CompteEpargne : public Compte
{
public:
    CompteEpargne();
    ~CompteEpargne();
    CompteEpargne(const float montant_initial);
    void CalculerInterets(float tauxInteret);
private:
    float tauxInteret;
};

#endif // COMPTEEPARGNE_H
