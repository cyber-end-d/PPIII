#include<iostream>
#include<stdlib.h>
#include"Arreglo.h"

using namespace std;

Arreglo::Arreglo(int t)
{
    if(t>=1)
        {
            tam=t;
            p=new int[tam];//malloc=new  free=delete
        }
    else //num negativo
        {
            cout<<"Tamaño invalido. Asignado tamaño por default t=1."<<endl;
            tam=1;
            p=new int[tam];
        }
    if(p==NULL)
    {
        cout<<"Memoria insuficiente.";
        exit(-1);
    }

    for(int i=0;i<tam;i++)
    {
        setValor(i,0);
    }
}

Arreglo::~Arreglo()
{
    delete[] p;
}

int Arreglo::getValor(int pos)const
{
    if(pos>=0&&pos<tam)
    {
        return p[pos];
    }
    else
    {
        cout<<"Posicion incorrecta."<<endl;
        return -1;
    }
}

void Arreglo::setValor(int pos, int dato)
{
    if(pos>=0&&pos<tam)
    {
        p[pos]=dato;
    }
    else
    {
        cout<<"Posicion incorrecta."<<endl;
    }
}

void Arreglo::insertar(int pos, int dato)
{
    int *aux;

    if(pos>=0&&pos<tam)
    {
        aux=p;
        p=new int[tam+1];
        if(p==NULL)
        {
            cout<<"Memoria insuficiente.";
            exit(-1);
        }
        tam++; //p tiene el tamaño tam
        for(int i=0;i<pos;i++)
        {
            p[i]=aux[i];
        }
        p[pos]=dato;
        for(int i=pos;i<tam;i++)
        {
            p[i+1]=aux[i];
        }

        delete[]aux;
    }
    else
    {
        cout<<"Posicion incorrecta."<<endl;
        exit(-1);
    }

}

void Arreglo::insertarFin(int dato)
{
    int *aux;

        aux=p;
        p=new int[tam+1];
        if(p==NULL)
        {
            cout<<"Memoria insuficiente.";
            exit(-1);
        }
        tam++;
        for(int i=0;i<tam;i++)
        {
            p[i]=aux[i];
        }
        p[tam-1]=dato;

        delete[]aux;
}

int Arreglo::getTamano()const
{
    return tam;
}

void Arreglo::eliminar(int pos)
{
    int *aux;

    if(pos>=0&&pos<tam)
    {
        aux=p;
        p=new int[tam-1];
        if(p==NULL)
        {
            cout<<"Memoria insuficiente.";
            exit(-1);
        }
        tam--; //p tiene el tamaño tam
        for(int i=0;i<pos;i++)
        {
            p[i]=aux[i];
        }
        for(int i=0;i<(tam-1);i++)
        {
            p[i]=aux[i+1];
        }

        delete[]aux;
    }
    else
    {
        cout<<"Posicion incorrecta."<<endl;
        exit(-1);
    }
}

ostream& operator<<(ostream& salida, Arreglo a)
{
    for(int i=0;i<(a.tam);i++)
    {
        salida<<a.p[i]<<endl;
    }
    return salida;
}

istream& operator>>(istream& entrada, Arreglo&a)
{
    for(int i=0;i<(a.tam);i++)
    {
        cout<<"Ingrese un entero: "<<endl;
        entrada>>a.p[i];
    }
    return entrada;
}
