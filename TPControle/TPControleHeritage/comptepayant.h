#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H

#include "compte.h"

class ComptePayant : public Compte
{
public:
    void ConsulterSolde();
    void Deposer(const float montant);
    void Retirer(const float montant);
    ComptePayant();
    ~ComptePayant();
    ComptePayant(const float montant_initial);
private:
    int operationPayante;
};

#endif // COMPTEPAYANT_H
