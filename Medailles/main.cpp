#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string nomDuFichier;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*

    if (!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau

        cout<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< endl;

        do
        {
        //récupérationdes valeurs
        leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
        if(leFichier.good())//Silesvaleursontbienétélues
        {
            cout<<"|"<< setw(17) << left << pays << right << "|" << setw(8) << nbOr << "|" << setw(8) << nbArgent << "|" << setw(8) << nbBronze << "|" << endl;
            // A compléter, affichagedechaquelignedutableau
        }
    } while (!leFichier.eof());
        cout<<"+"<< setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" << setfill(' ')<< endl;
    // A compléter, affichagede la dernière lignedutableau.
}
 return 0;
}
