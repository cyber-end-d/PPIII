#include<iostream>
#include<stdlib.h>
#include<string.h>
#include"Factura.h"
#include"Articulos.h"

using namespace std;

const double Factura::IVA=0.21;

Factura::Factura(int n, int ca)
{
    if(n>=0)
        num=n;
    else
        cout<<"Numero de factura incorrecto."<<endl;

    if(ca>=0)
        cantArt=ca;
    else
        cantArt=1;

    p=new Articulo[cantArt];
}

Factura::~Factura()
{
    delete[]p;
}

double Factura::getImporte()const
{
    double suma=0;
    for(int i=0;i<cantArt;i++)
    {
        suma+=(p[i].getCant())*(p[i].getPu());
    }
    return (suma+(suma*IVA));
}

ostream& operator<<(ostream& salida, const Factura& f)
{
    int i=0;
    salida<<"Factura numero "<<f.num<<endl<<endl;
    salida<<"Articulos:"<<endl;
    for(i=0;i<f.cantArt;i++)
    {
        salida<<"----Art. codigo "<<f.p[i].getCodigo()<<"----"<<endl<<"Descripcion: "<<f.p[i].getDescripcion()<<endl<<"Cdad vendida: "<<f.p[i].getCant()<<endl<<"Precio unitario: "<<f.p[i].getPu()<<endl;
    }
    cout<<endl;
    salida<<"Total de la factura: "<<f.getImporte()<<endl;

    return salida;
}

Articulo::Articulo()
{
    int largo;

    do
    {
        cout<<"Ingrese el codigo del articulo: ";
        cin>>cod;
        cout<<endl;
    }while(cod<0);
    do
    {
        cout<<"Ingrese la descripcion del articulo: ";
        cin>>desc;
        largo=strlen(desc);
        cout<<endl;
    }while(largo>30);
    do
    {
        cout<<"Ingrese la cantidad vendida: ";
        cin>>cant;
        cout<<endl;
    }while(cant<=0);
    do
    {
        cout<<"Ingrese el precio unitario del articulo: ";
        cin>>pu;
        cout<<endl;
    }while(pu<=0);
    cout<<endl;
}

int Articulo::getCodigo()const
{
    return cod;
}

const char* Articulo::getDescripcion()const
{
    return desc;
}

int Articulo::getCant()const
{
    return cant;
}

double Articulo::getPu()const
{
    return pu;
}
