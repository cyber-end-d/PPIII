#ifndef LIEBRE_H_INCLUDED
#define LIEBRE_H_INCLUDED

class Liebre:public Animal
{
  Liebre(const char*, int);

private:
  const char*nombre;
  int pos;
};

#endif // LIEBRE_H_INCLUDED
