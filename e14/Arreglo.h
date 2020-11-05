#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED
#include<iostream>
using namespace std;

class Arreglo
{
friend ostream& operator<<(ostream&, Arreglo);
friend istream& operator>>(istream&, Arreglo&);

public:
    Arreglo(int=1);
    ~Arreglo();
    int getValor(int)const;
    void setValor(int, int);
    void insertar(int, int);
    void eliminar(int);
    void insertarFin(int);
    int getTamano()const;

private:
    int tam;
    int *p;
};


#endif // ARREGLO_H_INCLUDED
