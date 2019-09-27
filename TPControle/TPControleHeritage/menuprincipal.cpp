#include "menuprincipal.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

/**
 * @brief menuPrincipal::menuPrincipal
 * @details Constructeur de la classe menuPrincipal,
 *      contient les items du menuPrincipal
 * @param _nom du fichier
 * @param longueurMax d'une option
 */
MenuPrincipal::MenuPrincipal(const string &_nom):nom(_nom), longueurMax(0)
{
    string nomDuFichier;

    ifstream leFichier(nom.c_str());

    if(!leFichier .is_open())
    {
        cerr << "Erreur d'ouverture du fichier : " << nom << endl;
        nbOptions=0;
    }else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(leFichier),istreambuf_iterator<char>(),'\n'));
        leFichier.seekg(0,ios::beg);
        options = new string [nbOptions];
        for(int indice=0;indice<nbOptions;indice++)
        {
            getline(leFichier,options[indice]);
            if(static_cast<int>(options[indice].length())>longueurMax)
            {
                longueurMax = static_cast<int>(options[indice].length());
            }
        }
    }
}

/**
 * @brief menuPrincipal::~menuPrincipal
 * @details Destructeur de la classe,
 *      libère la mémoire du constructeur
 */
MenuPrincipal::~MenuPrincipal()
{
    delete [] options ;
}

/**
 * @brief menuPrincipal::Afficher
 * @details Fonction qui permet d'afficher le menuPrincipal,
 *      ainsi que d'éffectuer le choix du menuPrincipal
 * @return
 */
int MenuPrincipal::Afficher()
{
    cout << "+" << setfill('-') << setw(6) << "+"  << setfill(' ') << setfill('-') << setw(11) << "+" << endl;
    for (int indice=0; indice<nbOptions-1; indice++)
    {
        cout << "|" << setw(5) << setfill(' ') << indice+1 << "| " << options[indice] << setfill(' ') << setw(2) << "|" << endl;
    }
    cout << "+" << setfill('-') << setw(6) << "+"  << setfill(' ') << setfill('-') << setw(11) << "+" << endl;
    //
    //
    //
    int choix;

    do{
        cout << "Entrer un nombre parmis les suivants : " << endl;
        cin >> choix;
    }while(choix > nbOptions);

    return choix;
}

/**
 * @brief menuPrincipal::AttendreAppuiTouche
 * @details Fonction qui attend que l'on appui sur la touche Entrée après avoir fait son choix,
 *      le buffer d'entrée est vidé
 */
void MenuPrincipal::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    // Vidage du tampon d'entrée
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
