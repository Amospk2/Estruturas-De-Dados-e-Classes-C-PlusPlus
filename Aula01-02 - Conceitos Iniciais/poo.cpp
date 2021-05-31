#include <iostream>
#include "Aviaozinho.h"
using namespace std;


//////////



////////////
   
int main(){
    Aviaozinho *Av01 = new Aviaozinho('p');
    Aviaozinho *Av02 = new Aviaozinho('j');
    Aviaozinho *Av03 = new Aviaozinho('m');

    Av01->imprimir();
    Av02->imprimir();
    Av03->imprimir();
    return 0;
}