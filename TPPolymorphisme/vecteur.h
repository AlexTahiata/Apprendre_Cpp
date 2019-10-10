#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
using namespace std;

template <typename TYPE>
class Vecteur// : public Segment
{
private:
    TYPE x;
    TYPE y;
public:
    Vecteur();
    Vecteur(const TYPE _x, const TYPE _y);
    TYPE getX() const;
    void setX(const TYPE &value);
    TYPE getY() const;
    void setY(const TYPE &value);
    Vecteur<TYPE> operator + (const Vecteur<TYPE> &_autre);
    Vecteur<TYPE> operator - (const Vecteur<TYPE> &_autre);
    void Afficher();
};


template <typename TYPE>
Vecteur<TYPE>::Vecteur():
    x(0),
    y(0)
{}

template <typename TYPE>
Vecteur<TYPE>::Vecteur(const TYPE _x, const TYPE _y):
    x(_x),
    y(_y)
{}

template <typename TYPE>
TYPE Vecteur<TYPE>::getX() const
{
    return x;
}

template <typename TYPE>
void Vecteur<TYPE>::setX(const TYPE &value)
{
    x = value;
}

template <typename TYPE>
TYPE Vecteur<TYPE>::getY() const
{
    return y;
}

template <typename TYPE>
void Vecteur<TYPE>::setY(const TYPE &value)
{
    y = value;
}

template<typename TYPE>
Vecteur<TYPE> Vecteur<TYPE>::operator+(Vecteur <TYPE> const &_autre)
{
    return Vecteur <TYPE> (x +_autre.x,y +_autre.y);

}

template<typename TYPE>
Vecteur<TYPE> Vecteur<TYPE>::operator-(Vecteur <TYPE> const &_autre)
{
    return Vecteur <TYPE> (x -_autre.x,y -_autre.y);

}

template<typename TYPE>
void Vecteur<TYPE>::Afficher()
{
    cout << "Vecteur en (" << x << "," << y << ")" << endl;
}

/*class Vecteur
{
private:
    double x;
    double y;
public:
    Vecteur(const double _x, const string _y);
    Vecteur operator+(const string _autre);
    Vecteur operator-(const string _autre);
    void Afficher();
    void setX(const double _x);
    double getX();
    void setY(const double _y);
    double getY();
};*/

#endif // VECTEUR_H
