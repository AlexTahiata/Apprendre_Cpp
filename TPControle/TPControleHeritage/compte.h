#ifndef COMPTE_H
#define COMPTE_H


class Compte
{
public:
    void ConsulterSolde();
    void Deposer(const float montant);
    void Retirer(const float montant);
    Compte();
    ~Compte();
    Compte(const float montant_initial);
protected:
    float solde;
};

#endif // COMPTE_H
