#ifndef GERENTE_H_INCLUDED
#define GERENTE_H_INCLUDED
#include"Empleado.h"

class Gerente:public Empleado
{
public:
  Gerente(const char*, const char*, float);
  void setSalario(float);
  float getSalario()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  float salario;
};


#endif // GERENTE_H_INCLUDED
