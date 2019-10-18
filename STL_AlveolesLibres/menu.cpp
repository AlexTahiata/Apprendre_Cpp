/**
 * @file menu.cpp
 * @brief Implémentation de la classe Menu
 * @author atahiata
 * @date 13 septembre 2019
 */

#include "menu.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<stdio.h>
#include <string.h>

enum erreurs{
    FICHIER,
    VIDE
};

/**
 * @brief Menu::Menu
 * @details Constructeur de la classe Menu, attribution de la valeur max à longueurMax
 * @param _nom nom du fichier à ouvrir
 */
Menu::Menu(const string _nom):nom(_nom), longueurMax(0){

    ifstream leFichier(nom.c_str());

    if(!leFichier .is_open()){
        //cerr << "Erreur lors de l'ouverture du fichier";
        nbOptions=0;
        options = nullptr;
        ErreurFichier excep(FICHIER,"Erreur lors de l'ouverture du fichier");
        throw(excep);
    }else{
        if(nbOptions==0){
            ErreurVide excep(VIDE,"Erreur le fichier est vide");
            throw(excep);
        }
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(leFichier),istreambuf_iterator<char>(),'\n'));
        leFichier.seekg(0,ios::beg);
        options = new string [nbOptions];
        for(int i=0;i<nbOptions;i++) {
            getline(leFichier,options[i]);
            if(static_cast<int>(options[i].length())>longueurMax){
                longueurMax = static_cast<int>(options[i].length());
            }
        }
    }
}

/**
 * @brief Menu::Afficher
 * @details Affiche le menu en fonction du nombre d'options dans le fichier
 * @return Retourne le choix de l'utilisateur
 */
int Menu::Afficher(){
    int choix;
    bool passage=false;
    do{
        system("clear");
        cout << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(longueurMax+3) << "+" << endl;
        for (int i=0; i<nbOptions; i++) {
            int lg =longueurMax-static_cast<int>(options[i].length())+2;
            cout << "|" << setw(5) << setfill(' ') << i+1 << "| " << options[i] << setfill(' ') << setw(lg) << "|" << endl;
        }
        cout << "+" << setfill('-') << setw(6) << "+" << setfill('-') << setw(longueurMax+3) << "+" << endl;
        cout << endl;

        if(passage==false){
            cout << "Votre choix svp : ";
            passage=true;
        }else{
            cout << "Entrer un nombre entre 1"<< " et " << nbOptions << ": ";
        }
        if(!(cin>>choix)){
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
            choix=-1;
        }
    }while((choix<1) || (choix>nbOptions));

    return choix;
}

/**
 * @brief Menu::AttendreAppuiTouche
 * @details Attend l'appui d'une touche pour quitter
 */
void Menu::AttendreAppuiTouche(){
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer ...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    system("clear");
}

/**
 * @brief Menu::~Menu
 * @details Destructeur de la classe Menu
 */
Menu::~Menu(){
    if(options != nullptr)
        delete [] options ;
}

ErreurFichier::ErreurFichier(int _codeErreur, string _message):
    codeErreur(_codeErreur),
    message(_message)
{

}

int ErreurFichier::ObtenirCodeErreur() const
{
    return codeErreur;
}

string ErreurFichier::ObtenirDescription() const
{
    return message;
}

ErreurVide::ErreurVide(int _codeErreur, string _message):
    codeErreur(_codeErreur),
    message(_message)
{

}

int ErreurVide::ObtenirCodeErreur() const
{
    return codeErreur;
}

string ErreurVide::ObtenirDescription() const
{
    return message;
}
