#ifndef OBRERO_H_INCLUDED
#define OBRERO_H_INCLUDED

#include"Empleado.h"
#include"Obrero.h"
#include "Gerente.h"
#include"Vendedor.h"
#include"Adestajo.h"

class Obrero:public Empleado
{
public:
    Obrero(const char*, const char*, int, float);
    void setHs(int);
    void setPrecio(float);
    int getHs()const;
    float getPrecio()const;
    virtual void mostrar()const;
    virtual float sueldo()const;

private:
    int hs;
    float precio;
};

#endif // OBRERO_H_INCLUDED
