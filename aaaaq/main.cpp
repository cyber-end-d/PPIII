#include <iostream>
#include"Empleado.h"
#include"Gerente.h"
#include"Obrero.h"
#include"Vendedor.h"
#include"ADestajo.h"

using namespace std;

int main()
{
    Empleado*e[4];
    Gerente g("aaa", "bbb", 10);
    Obrero o("ccc", "ddd", 10, 1);
    Vendedor v("eee", "fff", 9, 10);
    ADestajo a("ggg", "hhh", 1, 10);

    e[0]=&g;
    e[1]=&o;
    e[2]=&v;
    e[3]=&a;

    for(int i=0;i<4;i++)
    {
      e[i]->mostrar();
      e[i]->sueldo();
    }

    return 0;
}
