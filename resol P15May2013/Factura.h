#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED
#include "Articulo.h"
#include <iostream>
using namespace std;
class Factura
{
    friend ostream & operator<<(ostream &,const Factura &);
    public:
        Factura(int,int=1);
        double getImporte()const;
        ~Factura();
    private:
        Articulo *part;
        int cantart,numero;
        static const double IVA;
};

#endif // FACTURA_H_INCLUDED
