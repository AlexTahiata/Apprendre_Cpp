#include "menu.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;


menu::menu(const string &_nom):nom(_nom), longueurMax(0)
{
    string nomDuFichier;

    ifstream leFichier(nom.c_str());

    if(!leFichier .is_open())
    {
        cerr << "Erreur lors de l'ouverture du fichier";
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

menu::~menu()
{
    delete [] options ;
}

int menu::Afficher()
{
    cout << "+" << setfill('-') << setw(6) << "+"  << setfill(' ') << setfill('-') << setw(11) << "+" << endl;
    for (int indice=0; indice<nbOptions-1; indice++)
    {
        cout << "|" << setw(5) << setfill(' ') << indice+1 << "| " << options[indice] << setfill(' ') << setw(2) << "|" << endl;
    }
    cout << "+" << setfill('-') << setw(6) << "+"  << setfill(' ') << setfill('-') << setw(11) << "+" << endl;

    int choix;

    cout << "Entrer un nombre entre 1 et 5 : " ;
    cin >> choix;

    if(!(cin>>choix))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
        choix = -1;
    }

    return 0;
}

void menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
