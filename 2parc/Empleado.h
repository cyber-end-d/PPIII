#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado
{
public:
  Empleado(const char*,const char*);
  ~Empleado();
  void setApellido(const char*);
  void setNombre(const char*);
  const char*getApellido()const;
  const char*getNombre()const;
  virtual void mostrar()const;
  virtual float sueldo()const=0; //todos tienen un sueldo distinto, obligo a redefinir

private:
  char *ape, *nom;
};


#endif // EMPLEADO_H_INCLUDED
