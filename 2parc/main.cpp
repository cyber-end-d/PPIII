#include <iostream>
#include"Empleado.h"
#include"Obrero.h"
#include"Gerente.h"
#include"Vendedor.h"
#include"ADestajo.h"

using namespace std;

int main()
{
    Empleado*e[4];
    Obrero o("Juan", "Perez", 10, 2);
    Gerente g("Tomas", "Gomez", 30000);
    Vendedor v("Juana", "Rodriguez", 20000, 10000);
    ADestajo a("Maria", "Munoz", 50, 1000);

    e[0]=&o;
    e[1]=&g;
    e[2]=&v;
    e[3]=&a;

    for(int i=0; i<4; i++)
    {
      e[i]->mostrar();
      cout<<"Sueldo: "<<e[i]->sueldo()<<endl<<endl;
    }

    return 0;
}
