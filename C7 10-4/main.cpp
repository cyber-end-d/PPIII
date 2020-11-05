#include <iostream>
#include<string>
#include"Fecha.h"
#include"Empleado.h"

using namespace std;

int main()
{
    cout<<"Cantidad de empleados: "<<Empleado::getContador()<<endl;
    Empleado*e1=new Empleado("Ana", "Alvarez");
    Empleado*e2=new Empleado("Jose", "Perez");
    cout<<"Cantidad de empleados: "<<e1->getContador()<<endl;
    cout<<"Empleado 1: "<<e1->getNombre()<<" "<<e2->getApellido()<<endl;
    delete e1;
    delete e2;
    cout<<"Cantidad de empleados: "<<Empleado::getContador()<<endl;

    return 0;
}
