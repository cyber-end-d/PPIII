#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED

#include"Empleado.h"

class Vendedor:public Empleado
{
public:
  Vendedor(const char*, const char*, float, float);
  void setFijo(float);
  void setVtas(float);
  float getFijo()const;
  float getVtas()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  float fijo, vtas;
  static float porcentaje;
};

#endif // VENDEDOR_H_INCLUDED
