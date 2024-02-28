#include <iostream>
#include <Mascota.hpp>
using namespace std; 
int main(int argc, char const *argv[])
{
Mascota m1;
Mascota m2;

m1.Comer();
m2.Comer();

    cout <<"Mascota 1"<<m1.LeerEneegia()<< endl;
    <<"Mascota 2 Energia"<<m2.LeerEnergia()<< endl;
    return 0;
}
