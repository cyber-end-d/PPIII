#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED

#include"Empleado.h"
#include"Obrero.h"
#include "Gerente.h"


class Vendedor:public Empleado
{
public:
    Vendedor(const char*, const char*, float, float);
    void setBasico(float);
    void setVtas(float);
    float getBasico()const;
    float getVtas()const;
    virtual void mostrar()const;
    virtual float sueldo()const;

private:
    float basico, vtas;
    static int porcentaje;
};


#endif // VENDEDOR_H_INCLUDED
