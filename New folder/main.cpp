//hacer el ej 17 invoc ando las func de manera polimorfica
#include <iostream>
#include<iomanip>

#include"Empleado.h"
#include"Obrero.h"
#include "Gerente.h"
#include"Vendedor.h"
#include"Adestajo.h"

using namespace std;

using namespace std;

int main()
{
    Empleado*V[4]; //es un puntero, llamo funciones con flecha
    Obrero o("Juan", "Perez", 42, 15);
    Gerente g("Santiago", "Solis", 30000);
    Vendedor v("Antonio", "Gomez", 10000, 15000);
    Adestajo a("Ana", "Rodriguez", 10, 50.50);

    V[0]=&o; //mi objeto es de clase empleado. acepta sin problema dir de memos de clases derivadas, y hace la conversion.
    V[1]=&g;
    V[2]=&a;
    V[3]=&v;

    for(int i=0; i<4; i++)//aca se da el polimorfismo. dependiendo del objeto al que apunta llamara a la funcion de la clase que corresponda
    {
        V[i]->mostrar();
        cout<<"Sueldo a cobrar: "<<V[i]->sueldo()<<endl;
    }

    return 0;
}
