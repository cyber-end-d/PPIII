#include <iostream>
#include"Racional.h"

using namespace std;

int main()
{
    Racional A(1,2), B(2,5),C;

    C=-A;
    cout<<C;

    C=A+B;
    cout<<C;

    C+=A;
    cout<<C;

    C+=5;
    cout<<C;

    if(A==B)
        cout<<"Son iguales"<<endl;
    else
        cout<<"Son distintos"<<endl;

    C=++B;
    cout<<C;

    C=A++;
    cout<<C; //cout es operator<< entonces si no lo defino con racional no me lo va a mostrar

    return 0;
}
