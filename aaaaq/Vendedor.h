#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include<iostream>
#include"Empleado.h"

using namespace std;

class Vendedor:public Empleado
{
public:
  Vendedor(const char*, const char*, float, int);
  void setFijo(float);
  void setVtas(int);
  float getFijo()const;
  int getVtas()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  float fijo;
  int vtas;
  static float porcentaje;
};


#endif // VENDEDOR_H_INCLUDED
