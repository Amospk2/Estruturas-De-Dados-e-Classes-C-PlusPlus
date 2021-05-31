#include <iostream>
#include "classes.h"

using namespace std;

int main(){

    Veiculo *V01 = new Veiculo(1);
    Veiculo *V02 = new Veiculo(2);
    Veiculo *V03 = new Veiculo(3);

    V01->setLigar(1);




    cout << V01->getVelMax() << endl;
    cout << V02->getVelMax() << endl;
    cout << V03->getVelMax() << endl;

    if(V01->getLigado()){
        cout << "Veiculo 01 ligado" << endl;
    }else{
        cout << "Veiculo 01 nao esta ligado" << endl;
    }
    

    if(V02->getLigado()){
        cout << "Veiculo 02 ligado" << endl;
    }else{
        cout << "Veiculo 02 nao esta ligado" << endl;
    }

    if(V03->getLigado()){
        cout << "Veiculo 03 ligado" << endl;
    }else{
        cout << "Veiculo 03 nao esta ligado" << endl;
    }



    return 0;
}