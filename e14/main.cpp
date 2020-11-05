#include <iostream>
#include<stdlib.h>
#include"Arreglo.h"

using namespace std;

int main()
{
    int t;

    cout<<"Inserte el tamano del arreglo: ";
    cin>>t;
    Arreglo a(t);

    //a.insertarFin(50);
    cout<<"Tamano: "<<a.getTamano()<<endl;

    cout<<a;


    return 0;
}
