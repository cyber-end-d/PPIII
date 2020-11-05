#include<iostream>
#include<string.h>
#include<stdlib.h>
#include"Empleado.h"
#include"Obrero.h"
#include"Gerente.h"
#include"Vendedor.h"
#include"ADestajo.h"

using namespace std;

Empleado::Empleado(const char*n, const char*a)
{
  setNombre(n);
  setApellido(a);
}

Empleado::~Empleado()
{
  delete[]nom;
  delete[]ape;
}

void Empleado::setNombre(const char*n)
{
  nom=new char[strlen(n)+1];
  if(nom==NULL)
  {
    cout<<"Memoria insuficiente.";
    exit(-1);
  }
  else
    strcpy(nom,n);
}

void Empleado::setApellido(const char*a)
{
  ape=new char[strlen(a)+1];
  if(ape==NULL)
  {
    cout<<"Memoria insuficiente.";
    exit(-1);
  }
  else
    strcpy(ape,a);
}

const char* Empleado::getNombre()const
{
  return nom;
}

const char* Empleado::getApellido()const
{
  return ape;
}

void Empleado::mostrar()const
{
  cout<<"Empleado  "<<ape<<" "<<nom<<endl;
}



Obrero::Obrero(const char*n, const char*a, int h, float p):Empleado(n,a)
{
  setHoras(h);
  setPago(p);
}

void Obrero::setHoras(int h)
{
  horas=(h>=0?h:0);
}

void Obrero::setPago(float p)
{
  pago=(p>=0?p:0);
}

int Obrero::getHoras()const
{
  return horas;
}

float Obrero::getPago()const
{
  return pago;
}

void Obrero::mostrar()const
{
  Empleado::mostrar();
  cout<<"El empleado es un Obrero."<<endl;
  cout<<"Horas trabajadas: "<<horas<<", pago por hora: "<<pago<<endl;
}

float Obrero::sueldo()const
{
  if(horas>=40)
    return (horas*pago);
  else
    return ((40*pago)+((horas-40)*pago*1.5));
}



Gerente::Gerente(const char*n, const char*a, float s):Empleado(n, a)
{
  setSalario(s);
}

void Gerente::setSalario(float s)
{
  salario=(s>=0?s:0);
}

float Gerente::getSalario()const
{
  return salario;
}

void Gerente::mostrar()const
{
  Empleado::mostrar();
  cout<<"El empleado es un gerente."<<endl;
  cout<<"Salario: "<<salario<<endl;
}

float Gerente::sueldo()const
{
  return salario;
}


float Vendedor::porcentaje=10;

Vendedor::Vendedor(const char*n, const char*a, float f, int v):Empleado(n,a)
{
  setFijo(f);
  setVtas(v);
}

void Vendedor::setFijo(float f)
{
  fijo=(f>=0?f:0);
}

void Vendedor::setVtas(int v)
{
  vtas=(v>=0?v:0);
}

float Vendedor::getFijo()const
{
  return fijo;
}

int Vendedor::getVtas()const
{
  return vtas;
}

void Vendedor::mostrar()const
{
  Empleado::mostrar();
  cout<<"El empleado es un vendedor."<<endl;
  cout<<"Salario fijo: "<<fijo<<" , ventas brutas: "<<vtas<<endl;
}

float Vendedor::sueldo()const
{
  return (fijo*(vtas(porcentaje/100.0)));
}



ADestajo::ADestajo(const char*n, const char*a, float pr, int n):Empleado(n,a)
{
  setPrecio(pr);
  setNum(n);
}

void ADestajo::setPrecio(float pr)
{
  precio=(pr>=0?pr:0);
}

void ADestajo::setNum(int n)
{
  num=(n>=0?n:0);
}

float ADestajo::getPrecio()const
{
  return precio;
}

int ADestajo::getNum()const
{
  return num;
}

void ADestajo::mostrar()const
{
  Empleado::mostrar();
  cout<<"El empleado es un obrero a destajo."<<endl;
  cout<<"Numero de piezas producidas: "<<num<<", precio por pieza: "<<precio<<endl;
}

float ADestajo::sueldo()const
{
  return (num*precio);
}
