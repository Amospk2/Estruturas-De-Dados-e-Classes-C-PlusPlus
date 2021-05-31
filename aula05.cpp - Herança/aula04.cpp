#include <iostream>
#include "classes.h"
int main(){
    moto *moto01 = new moto();
    Carro *carro01 = new Carro();
    Tanque *tanque01 = new Tanque();

    moto01->imprime();
    carro01->imprime();
    tanque01->imprime();
    return 0;
}