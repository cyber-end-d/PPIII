#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include<iostream>

using namespace std;

class Empleado
{
public:
  Empleado(const char*, const char*);
  ~Empleado();
  void setNombre(const char*);
  void setApellido(const char*);
  const char* getNombre()const;
  const char* getApellido()const;
  virtual void mostrar()const;
  virtual float sueldo()const=0;

private:
  const char*nom, *ape;
};

#endif // EMPLEADO_H_INCLUDED
