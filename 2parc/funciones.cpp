#include<iostream>
#include<string.h>
#include<stdlib.h>
#include"Empleado.h"
#include"Obrero.h"
#include"Gerente.h"
#include"Vendedor.h"
#include"ADestajo.h"


using namespace std;

Empleado::Empleado(const char*n, const char* a)
{
  setNombre(n);
  setApellido(a);
}

Empleado::~Empleado()
{
  delete[]nom;
  delete[]ape;
}

void Empleado::setApellido(const char*a)
{
  ape=new char[strlen(a)+1];
  if(ape==NULL)
  {
    cout<<"Memoria insuficiente.";
    exit(-1);
  }
  strcpy(ape, a);
}

void Empleado::setNombre(const char*n)
{
  nom=new char[strlen(n)+1];
  if(nom==NULL)
  {
    cout<<"Memoria insuficiente.";
    exit(-1);
  }
  strcpy(nom, n);
}


const char* Empleado::getApellido()const
{
  return ape;
}

const char* Empleado::getNombre()const
{
  return nom;
}

void Empleado::mostrar()const
{
  cout<<"Empleado:"<<endl<<"Nombre: "<<nom<<"   Apellido: "<<ape<<endl;
}





Obrero::Obrero(const char*n, const char*a, int h, float p):Empleado(n, a)
{
  setHs(h);
  setPago(p);
}

void Obrero::setHs(int h)
{
  hs=(h>=0?h:0);
}

void Obrero::setPago(float p)
{
  pago=(p>=0?p:0);
}

int Obrero::getHs()const
{
  return hs;
}

float Obrero::getPago()const
{
  return pago;
}

void Obrero::mostrar()const
{
  Empleado::mostrar();
  cout<<endl<<"El empleado es un obrero."<<endl;
  cout<<"Horas trabajadas: "<<hs<<"    Pago por hora: "<<pago<<endl<<endl;
}

float Obrero::sueldo()const
{
  if(hs<=40)
    return (hs*pago);
  else
  {
    return ((40*pago)+((hs-40)*pago*1.5));
  }
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
  cout<<endl<<"El empleado es un gerente."<<endl;
  cout<<"Salario: "<<salario<<endl<<endl;
}

float Gerente::sueldo()const
{
  return salario;
}





float Vendedor::porcentaje=0.1;

Vendedor::Vendedor(const char*n, const char*a, float f, float v):Empleado(n, a)
{
  setFijo(f);
  setVtas(v);
}

void Vendedor::setFijo(float f)
{
  fijo=(f>=0?f:0);
}

void Vendedor::setVtas(float v)
{
  vtas=(v>=0?v:0);
}

float Vendedor::getFijo()const
{
  return fijo;
}

float Vendedor::getVtas()const
{
  return vtas;
}

void Vendedor::mostrar()const
{
  Empleado::mostrar();
  cout<<endl<<"El empleado es un vendedor."<<endl;
  cout<<"Salario basico: "<<fijo<<"   Ventas brutas: "<<vtas<<endl<<endl;
}

float Vendedor::sueldo()const
{
  return (fijo+(porcentaje*vtas));
}






ADestajo::ADestajo(const char*n, const char*a, int nu, float p):Empleado(n, a)
{
  setNum(nu);
  setPrecio(p);
}

void ADestajo::setNum(int nu)
{
  num=(nu>=0?nu:0);
}

void ADestajo::setPrecio(float p)
{
  precio=(p>=0?p:0);
}

int ADestajo::getNum()const
{
  return num;
}

float ADestajo::getPrecio()const
{
  return precio;
}

void ADestajo::mostrar()const
{
  Empleado::mostrar();
  cout<<endl<<"El empleado es un obrero a destajo."<<endl;
  cout<<"Numero de elementos producidos: "<<num<<"     Precio por elemento: "<<precio<<endl<<endl;
}

float ADestajo::sueldo()const
{
  return (num*precio);
}
