#include "alveoleslibres.h"

AlveolesLibres::AlveolesLibres(const unsigned int _nbRangees, const unsigned int _nbColonnes):
    nbRangees(_nbRangees),
    nbColonnes(_nbColonnes)
{
    for(int indice = 1; indice <= (nbRangees*nbColonnes) ; indice++){
        push_back(indice);
    }
}

bool AlveolesLibres::Reserver(unsigned int &_rangee,unsigned  int &_colonne)
{
    bool retour = false;
    if(!empty()){
        int numAlveole = back();
        _rangee = ((numAlveole - 1) / nbColonnes) +1;
        _colonne = ((numAlveole -1) % nbColonnes)+1;
        pop_back();
        retour = true;
    }
    return retour;
}

void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{

    int numAlveole = (_rangee - 1) * 20 + _colonne;
    push_back(numAlveole);
}

void AlveolesLibres::Visualiser()
{
    vector<int>::iterator it;
    for(it = begin(); it != end(); it++){
        cout << *it << " ";
    }
    cout<<endl;
}
