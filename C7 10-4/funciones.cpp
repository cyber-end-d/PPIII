#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include"Fecha.h"
#include"Empleado.h"

using namespace std;

Fecha::Fecha(int d, int m, int a)
{
    if(m<=1&&m>=12)
        mes=m;
    else
    {
        mes=1;
        cout<<"Mes incorrecto, se establece en 1"<<endl;
    }
    dia=verificarDia(d);
    if(a>=1900)
        anio=a;
    else
    {
        anio=1900;
        cout<<"Año incorrecto, se establece en 1900"<<endl;
    }
    cout<<"Contructor fecha: "<<endl;
    mostrar();
}

void Fecha::mostrar()const
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

Fecha::~Fecha()
{
    cout<<"Destructor de fecha: "<<endl;
    mostrar();
}

int Fecha::verificarDia(int d)
{
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (d>0&&d<=dias[mes-1])
        return d;
    if(mes==2&&dia==29&&(anio%4==0&&anio%100!=0||anio%400==0))
        return d;
    cout<<"Dia incorrecto, se establece en 1"<<endl;
    return 1;
}

int Empleado::contador=0;

Empleado::Empleado(const char*n, const char*a)
{
    int l;
    l=strlen(n);
    //l=l<25?l:24;
    nombre=new char[l+1];
    if(nombre==NULL)
    {
        cout<<"insuficiente memoria"<<endl;
        exit(-1);
    }
    strcpy(nombre,n);
     l=strlen(a);
    //l=l<25?l:24;
    apellido=new char[l+1];
    if(apellido==NULL)
    {
        cout<<"insuficiente memoria"<<endl;
        exit(-1);
    }
    strcpy(apellido,a);
    contador++;
    cout<<"Constructor del empleado: "<<nombre<<" "<<apellido<<endl;
}
/*
void Empleado::mostrar()const
{
    cout<<apellido<<", "<<nombre<<endl;
    cout<<"Fecha de nacimiento: "<<endl;
    fechanac.mostrar();
    cout<<"Fecha de ingreso: "<<endl;
    fechaing.mostrar();
}*/

Empleado::~Empleado()
{
    cout<<"Destructor de empleado: "<<nombre<<" "<<apellido<<endl;
    delete nombre;
    delete apellido;
    contador --;
}

const char*Empleado::getNombre()const
{
    return nombre;
}

const char*Empleado::getApellido()const
{
    return apellido;
}

int Empleado::getContador()
{
    return contador;
}
