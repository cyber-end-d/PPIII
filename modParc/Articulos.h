#ifndef ARTICULOS_H_INCLUDED
#define ARTICULOS_H_INCLUDED
#include<iostream>
using namespace std;

class Articulo
{
    public:
        Articulo();
        int getCodigo()const;
        const char *getDescripcion()const;
        int getCant()const;
        double getPu()const;

    private:
        int cod;
        char desc[30];
        int cant;
        double pu;
};

#endif // ARTICULOS_H_INCLUDED
