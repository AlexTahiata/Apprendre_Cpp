#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string nomDuFichier;
    string nomDuFichier2;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;

    cout << "Entrer le nom du fichier à écrire : ";
    cin >> nomDuFichier2;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    ofstream leFichier2(nomDuFichier2.c_str());

    if (!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau

        leFichier2<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< endl;

        do
        {
        //récupérationdes valeurs
        leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
        if(leFichier.good())//Silesvaleursontbienétélues
        {
            leFichier2<<"|"<< setw(17) << left << pays << right << "|" << setw(8) << nbOr << "|" << setw(8) << nbArgent << "|" << setw(8) << nbBronze << "|" << endl;
            // A compléter, affichagedechaquelignedutableau
        }
    } while (!leFichier.eof());
        leFichier2<<"+"<< setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" << setfill(' ')<< endl;
    // A compléter, affichagede la dernière lignedutableau.
}
 return 0;
}
