#ifndef ADESTAJO_H_INCLUDED
#define ADESTAJO_H_INCLUDED
#include<iostream>
#include"Empleado.h"

class ADestajo:public Empleado
{
public:
  ADestajo(const char*, const char*, float, int);
  void setPrecio(float);
  void setNum(int);
  float getPrecio()const;
  int getNum()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  float precio;
  int num;
};


#endif // ADESTAJO_H_INCLUDED
