#ifndef RACIONAL_H_INCLUDED
#define RACIONAL_H_INCLUDED
#include<iostream>

using namespace std;

class Racional
{
    friend Racional operator+(Racional, Racional);
    friend bool operator==(Racional, Racional);
    friend ostream& operator<<(ostream&, Racional);
    friend istream& operator>>(istream&, Racional&);

    public:
        Racional(int=0,int=1);
        //Racional operator+(Racional); //no puedo tenerla dentro de la clase
        //si pongoasi puedo sumar a+5 y me deja
        Racional operator-();
        Racional operator+=(Racional);
        Racional operator++(); //preincremento
        Racional operator++(int);

    private:
        int num, den;
};


#endif // RACIONAL_H_INCLUDED
