#ifndef VECTEUR_H
#define VECTEUR_H

template <typename TYPE>
class Vecteur{
    private:
        TYPE x;
        TYPE y;
    public:
        Vecteur(const TYPE _x, const TYPE _y);

        TYPE getX() const;
        void setX(const TYPE &value);
        TYPE getY() const;
        void setY(const TYPE &value);
        TYPE operator + (const TYPE &_autre) const;
};

template<typename TYPE>
Vecteur<TYPE>::Vecteur(const TYPE _x, const TYPE _y):
    x(_x),
    y(_y)
{

}

template<typename TYPE>
TYPE Vecteur<TYPE>::getX() const
{
    return x;
}

template<typename TYPE>
void Vecteur<TYPE>::setX(const TYPE &value)
{
    x = value;
}

template<typename TYPE>
TYPE Vecteur<TYPE>::getY() const
{
    return y;
}

template<typename TYPE>
void Vecteur<TYPE>::setY(const TYPE &value)
{
    y = value;
}

template<typename TYPE>
TYPE Vecteur<TYPE>::operator+(const TYPE &_autre) const
{
    return TYPE(x+ _autre.x, y+ _autre.y);
}

#endif // VECTEUR_H
