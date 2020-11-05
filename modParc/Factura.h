#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED
#include<iostream>
#include"Articulos.h"

using namespace std;

class Factura
{
friend ostream& operator<<(ostream&, const Factura&);

public:
    Factura(int, int=1);
    ~Factura();
    double getImporte()const;

private:
    int num;
    static const double IVA;
    int cantArt;
    Articulo *p;
};

#endif // FACTURA_H_INCLUDED
