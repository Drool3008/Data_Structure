
#include "Vector.h"
#define co std::cout
#define nl "\n"
int main()
{
    Vector v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    v.display();
    v.push(60);
    v.display();
    Vector *v3;
    *v3=v;
    v3->display();
}