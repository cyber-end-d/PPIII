#ifndef ADESTAJO_H_INCLUDED
#define ADESTAJO_H_INCLUDED

#include"Empleado.h"
#include"Obrero.h"
#include "Gerente.h"
#include"Vendedor.h"


class Adestajo:public Empleado
{
public:
    Adestajo(const char*, const char*, int, float);
    void setPiezas(int);
    void setTarifa(float);
    int getPiezas()const;
    float getTarifa()const;
    virtual void mostrar()const;
    virtual float sueldo()const;

private:
    int piezas;
    float tarifa;

};


#endif // ADESTAJO_H_INCLUDED
