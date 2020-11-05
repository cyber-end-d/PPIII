#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED
#include <iostream>

using namespace std;

class Arreglo
{
        //sobrecarga de operadores << y >>
        friend ostream& operator<<(ostream&, Arreglo);
        friend istream& operator>>(istream&, Arreglo&); //no puedo hacer la funcion miembro de la clase, por eso la hago friend
    public:
    //contructor, parametro:tamaño
        Arreglo(int=1);
        ~Arreglo(); //destructor
        int getValor(int)const;//no modifica datos, devuelve valor en det posic
        void setValor(int, int);//cambia valro en cierta pos, pasa pos y valor
        void insertar(int, int);//pasa posicion y valor a insertar
        void eliminar(int);
        void insertarf(int); //inserta al final
        int getTamano()const;
        //el puntero es la variable que va a recibir la direccion cuando haga el new Arreglo...
    private:
        int tam;
        int*pv;
};

#endif // ARREGLO_H_INCLUDED
