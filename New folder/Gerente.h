#ifndef GERENTE_H_INCLUDED
#define GERENTE_H_INCLUDED

#include"Empleado.h"
#include"Obrero.h"


class Gerente:public Empleado
{
public:
    Gerente(const char*, const char*, float);
    void setHaber(float);
    float getHaber()const;
    virtual void mostrar()const;
    virtual float sueldo()const;

private:
    float haber;
};


#endif // GERENTE_H_INCLUDED
