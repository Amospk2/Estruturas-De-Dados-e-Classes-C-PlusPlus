#include <iostream>
#include "fila.h"
using namespace std;

int main()
{
    Fila * fi;
    fi = criar();
    elem x = 0;


    for(int i = 0;i<10;i++)
    {
        inserir(fi, i);
    }
    remover(fi, &x);
    cout << x << " ";

    remover(fi, &x);
    cout << x << " ";
    
    remover(fi, &x);
    cout << x << " ";
    
    inserir(fi, 88);
    inserir(fi, 77);
    
    while(!(IsEmpty(fi)))
    {
        remover(fi, &x);
        cout << x << " ";
    }

    return 0;
}