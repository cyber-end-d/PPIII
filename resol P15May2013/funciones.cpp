#include <iostream>
#include "Factura.h"
#include "Articulo.h"
#include <iomanip>
#include <string.h>
using namespace std;

const double Factura::IVA=0.21;
Factura::Factura(int nro,int ca)
{
    cantart=ca>0?ca:1;
    numero=nro;
    cout<<"Nro de factura: "<<numero<<endl;
    part=new Articulo[cantart];
}
Factura::~Factura()
{
    delete[] part;
}
double Factura::getImporte()const
{
    double suma=0;
    int i;
    for(i=0;i<cantart;i++)
    {
        suma+=part[i].getCantidad()*part[i].getPrecio();
    }
    return suma+suma*IVA;
}

ostream & operator<<(ostream & salida,const Factura &f)
{
    int i;
    salida<<"Número de factura: "<<f.numero<<endl;
    salida<<setw(10)<<"Código"<<setw(25)<<"Descripción"<<setw(10)<<"Cantidad"<<setw(20)<<"Precio unitario"<<setw(15)<<"Importe"<<endl;
    for(i=0;i<f.cantart;i++)
    {
        salida<<setw(10)<<f.part[i].getCodigo()<<setw(25)<<f.part[i].getDescrip()<<setw(10)<<f.part[i].getCantidad()<<setw(20)<<f.part[i].getPrecio()<<setw(15)<<f.part[i].getCantidad()*f.part[i].getPrecio()<<endl;
    }
    salida<<setw(65)<<"Total general: "<<setw(15)<<fixed<<setprecision(2)<<f.getImporte()<<endl;
    return salida;
}

Articulo::Articulo()
{
    int l;
    do
    {
        cout<<"Ingrese el código del artículo: ";
        cin>>codigo;
    }while(codigo<=0);
    do
    {
        cout<<"Ingrese la descripción del artículo: ";
        cin>>descrip;
        l=strlen(descrip);
    }while(l>=30);
    do
    {
        cout<<"Ingrese la cantidad vendida: ";
        cin>>cant;
    }while(cant<=0);
    do
    {
        cout<<"Ingrese el precio unitario: ";
        cin>>preciou;
    }while(preciou<=0);
}

int Articulo::getCodigo()const
{
    return codigo;
}

int Articulo::getCantidad()const
{
    return cant;
}

const char *Articulo::getDescrip() const
{
    return descrip;
}

double Articulo::getPrecio()const
{
    return preciou;
}
