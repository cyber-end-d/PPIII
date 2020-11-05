#ifndef OBRERO_H_INCLUDED
#define OBRERO_H_INCLUDED
#include<iostream>
#include"Empleado.h"

using namespace std;

class Obrero:public Empleado
{
public:
  Obrero(const char*, const char*, int, float);
  void setHoras(int);
  void setPago(float);
  int getHoras()const;
  float getPago()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  int horas;
  float pago;
};


#endif // OBRERO_H_INCLUDED
