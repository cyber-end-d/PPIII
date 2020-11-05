#ifndef ADESTAJO_H_INCLUDED
#define ADESTAJO_H_INCLUDED

#include"Empleado.h"

class ADestajo:public Empleado
{
public:
  ADestajo(const char*, const char*, int, float);
  void setNum(int);
  void setPrecio(float);
  int getNum()const;
  float getPrecio()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  int num;
  float precio;
};

#endif // ADESTAJO_H_INCLUDED
