template<typename T> //déclarationdutypegénériqueT
T RechercherPlusPetit(const T& a,const T& b){
    T retour;
    if(a<b)
        retour=a;
    else
        retour = b;
    return retour;
}
template<typename T>T CalculerMoyenne(T tab[],int nbElements){
    T somme = 0;
    for(int indice=0;indice < nbElements;indice++){
        somme += tab[indice];
    }
    return somme / nbElements;
}

template<typename T,typename R>R CalculerMoyenneV2(T tab[],int nbElements){
    R somme=0;
    for(int indice=0;indice<nbElements;indice++){
        somme+=tab[indice];
    }
    return somme/static_cast<int>(nbElements);
}
