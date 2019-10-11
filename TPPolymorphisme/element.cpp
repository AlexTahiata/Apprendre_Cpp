#include "element.h"

/**
 * @brief element::element
 * @details Constructeur de la classe Element,
 *      fait hériter la classe Segment de ses attributs et fonctions
 * @param _numero du segment
 * @param _vitesse du vecteur
 */
Element::Element(int _numero, int _vitesse):
    numero(_numero),
    vitesse(_vitesse)
{
    numero = 0;
}

Element::~Element()
{

}

int Element::getNumero()
{
    return numero;
}

void Element::setNumero(int &value)
{
    numero = value;
}

double Element::ObtenirLongueur()
{

}

void Element::ObtenirDuree()
{

}

void Element::ObtenirVecteurArivee()
{

}

void Element::Afficher()
{

}
