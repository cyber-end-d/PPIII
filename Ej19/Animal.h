#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

class Animal
{
public:
  Animal(const char*, int);
  ~Animal();
  void setNombre(const char*);
  void setPosicion(int);
  const char* getNombre()const;
  int getPosicion()const;
  virtual void mover();
  char*carrera(Animal*, Animal*);

private:
  const char*nom;
  int posicion;
};

#endif // ANIMAL_H_INCLUDED
