#include <iostream>
#include<stdlib.h>
#include "Arreglo.h"

using namespace std;

    Arreglo::Arreglo(int t)
    {
        //valido t
        if(t>=1)
        {
            tam=t;
            pv=new int[tam];
        }
        else //puso t como num negativo
        {
            cout<<"Tamano incorrecto. Se establece 1 como tamano."<<endl;
            tam=1;
            pv=new int[tam];
        }
        if(pv==NULL)
        {
            cout<<"Insuficiente memoria"<<endl;
            exit(-1);
        }


        for(int i=0;i<tam;i++)
        {
            setValor(i,0);
            //o puedo poner *(pv+i)=0; o pv[i]=0
        }
    }

    Arreglo::~Arreglo()
    {
        delete[]pv;
    }

    istream& operator>>(istream& entrada, Arreglo& a) //a: objeto, v su atributo
    {
        for(int i=0; i<a.tam; i++)
        {
            cout<<"Ingrese un entero";
            entrada>>a.pv[i];
        }
        return entrada;
    }

    ostream& operator<<(ostream& salida, Arreglo a)
    {
        for (int i=0; i<a.tam; i++)
            salida<<a.pv[i]<<endl;
        return salida;
    }

    int Arreglo::getValor(int pos)const
    {
        if(pos>=0&&pos<tam)
            return *(pv+pos); // o pv[pos]
        else
            return -1;
    }

    void Arreglo::setValor(int pos, int dato)
    {
        if(pos>=0&&pos<tam)
            pv[pos]=dato;
        else
            cout<<"Posicion incorrecta"<<endl;
    }

    void Arreglo::insertar(int pos, int valor)
    {
        int *aux;
        if(pos>=0&&pos<tam)
        {
            aux=pv; //ahora aux es el vector "viejo"
            pv=new int[tam+1]; //hago que pv apunte a un nuevo vector con una pos mas (el q inserto)
            if(pv==NULL)
            {
                cout<<"Insuficiente memoria"<<endl;
                exit(-1);
            }
            tam++; //ahora el vector orig tambien tiene 6 posic
            for(int i=0;i<pos;i++)
                pv[i]=aux[i];

            pv[pos]=valor;

            for(int i=pos;i<tam;i++)
                pv[i+1]=aux[i];

            delete[]aux;
        }
        else
            cout<<"Posicion incorrecta"<<endl;
    }

    void Arreglo::insertarf(int valor)
    {
        int *aux;
        aux=pv;
        pv=new int[tam+1];
        if(pv==NULL)
        {
            cout<<"Insuficiente memoria"<<endl;
            exit(-1);
        }
        tam++;
        for(int i=0; i<tam; i++)
            pv[i]=aux[i];
        pv[tam-1]=valor;
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
            aux=pv;
            pv=new int[tam-1];
           if(pv==NULL)
            {
                cout<<"Insuficiente memoria"<<endl;
                exit(-1);
            }
        tam--;
        for(int i=0; i<pos;i++)
            pv[i]=aux[i];

        for(int i=0;i<tam-1;i++)
            pv[i]=aux[i+1];
        }
        else
            cout<<"posicion incorrecta"<<endl;

        delete[]aux;
    }
