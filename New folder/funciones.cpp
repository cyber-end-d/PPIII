#include<iostream>
#include<iomanip>
#include <stdlib.h>
#include<string.h>

#include"Empleado.h"
#include"Obrero.h"
#include "Gerente.h"
#include"Vendedor.h"
#include"Adestajo.h"


using namespace std;

Empleado::~Empleado()
{
    delete[]nom;
    delete[]ape;
}

Empleado::Empleado(const char*n, const char*a)
{
    setNombre(n);
    setApellido(a);
}

void Empleado::setNombre(const char*n)
{
    nom=new char[strlen(n)+1];
    if(nom==NULL)
    {
        cout<<"Insuficiente memoria";
        exit(-1);
    }
    strcpy(nom, n);
}

void Empleado::setApellido(const char*a)
{
    ape=new char[strlen(a)+1];
    if(ape==NULL)
    {
        cout<<"Insuficiente memoria";
        exit(-1);
    }
    strcpy(ape, a);
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
    cout<<"Nombre: "<<nom<<"   Apellido: "<<ape<<endl;
}


Obrero::Obrero(const char*n, const char*a, int h, float p):Empleado(n, a)
{
    setHs(h);
    setPrecio(p);
}

void Obrero::setHs(int h)
{
    hs=(h<=0?0:h);
}

void Obrero::setPrecio(float p)
{
    precio=(p<=0?0:p);
}

int Obrero::getHs()const
{
    return hs;
}

float Obrero::getPrecio()const
{
    return precio;
}

void Obrero::mostrar()const //no puse tal cual la de empleado, la redefini
{
    Empleado::mostrar();
    cout<<"El empleado es un Obrero"<<endl;
    cout<<"Horas trabajadas: "<<hs<<"    Precio por hora: "<<precio<<endl;
}

float Obrero::sueldo()const //si <40 hs es el precio normal. si no, es 1.5 mas
{
    if(hs<=40)
        return (hs*precio);
    else
        return ((40*precio)+(1.5*precio*(hs-40)));
}



Gerente::Gerente(const char*n, const char*a, float h):Empleado(n, a)
{
    setHaber(h);
}

void Gerente::setHaber(float h)
{
    haber=(h<=0?0:h);
}

float Gerente::getHaber()const
{
    return haber;
}

void Gerente::mostrar()const
{
    Empleado::mostrar();
    cout<<"El empleado es un gerente."<<endl;
    cout<<"Haberes: "<<haber<<endl;
}

float Gerente::sueldo()const
{
    return haber;
}





int Vendedor::porcentaje=10;

Vendedor::Vendedor(const char*n, const char*a, float b, float v):Empleado(n, a)
{
    setBasico(b);
    setVtas(v);
}

void Vendedor::setBasico(float b)
{
    basico=(b<=0?0:b);
}

void Vendedor::setVtas(float v)
{
    vtas=(v<=0?0:v);
}

float Vendedor::getBasico()const
{
    return basico;
}

float Vendedor::getVtas()const
{
    return vtas;
}

void Vendedor::mostrar()const
{
    Empleado::mostrar();
    cout<<"El empleado es un vendedor."<<endl;
    cout<<"Basico: "<<basico<<"   Ventas: "<<vtas<<endl;
}

float Vendedor::sueldo()const
{
    return (basico+(vtas*(porcentaje/100.0))); //si el 100 le agrego el .0 vuelvo el 100 real, y con que uno sea real ya calcula decimale
}






Adestajo::Adestajo(const char*n, const char*a, int p, float t):Empleado(n,a)
{
    setPiezas(p);
    setTarifa(t);
}

void Adestajo::setPiezas(int p)
{
    piezas=(p<=0?0:p);
}

void Adestajo::setTarifa(float t)
{
    tarifa=(t<=0?0:t);
}

int Adestajo::getPiezas()const
{
    return piezas;
}

float Adestajo::getTarifa()const
{
    return tarifa;
}

void Adestajo::mostrar()const
{
    Empleado::mostrar();
    cout<<"El empleado es un adestajo"<<endl;
    cout<<"Piezas; "<<piezas<<"  Tarifa: "<<tarifa<<endl;
}

float Adestajo::sueldo()const
{
    return (piezas*tarifa);
}
