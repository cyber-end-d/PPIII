#include <iostream>
#include"Racional.h"

using namespace std;

Racional::Racional(int n, int d)
{
    num=n;
    den=d;
}

Racional operator+(Racional x, Racional y) //no se pueden sobrecargar ni usar ? :: sizeof .  y  =  & ya estan sobrecargados asi que no los puedo sobrecargar mas
{
    Racional z;
    z.num=x.num*y.den+y.num*x.den;
    z.den=x.den*y.den;
    return z;
}

Racional Racional::operator-()
{
    Racional z;
    z.num= -(num);
    z.den=den;
    return z;
}

Racional Racional::operator+=(Racional x)
{
    num=num*x.den+den*x.num;
    den=den*x.den;
    return *this;
}

bool operator==(Racional x, Racional y)
{
    return x.num*y.den==x.den*y.num;
}

Racional Racional::operator++()
{
    num+=den;
    return *this;
}

Racional Racional::operator++(int)
{
    Racional temp;
    temp=*this;
    num+=den;
    return temp;
}

ostream& operator<<(ostream& salida, Racional x)
{
    salida<<x.num<<"/"<<x.den<<endl;
    return salida; //para que se vayan en cascada y pueda hacer asi cjs<<sfba<<"knafl"<<jsb etc,
}

istream& operator>>(istream& entrada, Racional &x)
{
    entrada>>x.num;
    entrada>>x.den;
    return entrada;
}

/*void Racional::mostrar()const
{
    cout<<num<<"/"<<den<<endl;
}*/
