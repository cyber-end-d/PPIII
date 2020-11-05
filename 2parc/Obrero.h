#ifndef OBRERO_H_INCLUDED
#define OBRERO_H_INCLUDED
#include"Empleado.h"

using namespace std;

class Obrero:public Empleado
{
public:
  Obrero(const char*, const char*, int hs, float pago);
  void setHs(int);
  void setPago(float);
  int getHs()const;
  float getPago()const;
  virtual void mostrar()const;
  virtual float sueldo()const;

private:
  int hs;
  float pago;
};

#endif // OBRERO_H_INCLUDED
