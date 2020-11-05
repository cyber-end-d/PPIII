#include <iostream.h>
class A
{
private:
int m;
public:
static int x;
A() {m=10};
void CALCULAR() {x+=3};
};

int A::x=5;

void main(){
A c,d;
c.CALCULAR();
cout<<A::x;
c.CALCULAR();
cout<<d.x;
}
