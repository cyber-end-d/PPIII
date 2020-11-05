#include <iostream>
#include "Arreglo.h"

using namespace std;

int main()
{
    int t;
    cout<<"Ingrese el tamano del arreglo"<<endl;
    cin>>t; //como le pase t, ignora el 1 por default y tiene t cantidad de elementos en vez de 1
    Arreglo v(t);
    cout<<"Ingresar datos: "<<endl;
    cin>>v; //como sobrecargue >>, el for no me sirve aca(lo hice en la funcion friend) la idea es que sobrecargo el operador para que me cargue un ARREGLO

    v.insertar(3, 15);
    cout<<v;
    v.eliminar(5);
    cout<<v;
    v.insertarf(100);
    cout<<v;
    cout<<"---------"<<endl<<v;
    v.insertarf(32);
    cout<<v;
    /*if(v.getValor(5)==-1)
    {
        cout<<"La posicion no existe"<<endl;
        cout<<v;
    }
    else
        cout<<v.getValor(5)<<endl;*/
   // v.setValor(4, 200);
    //cout<<v;
    cout<<"Tamano del vector: "<<v.getTamano();

    return 0;
}
