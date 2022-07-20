#include <stdio.h>
#include "f.h"

int main()
{
    racional * p, *q, *t;
    p  = criar(1, 1);
    q = criar(1, 1);
    t = soma(p, q);

    imprimir(p);
    imprimir(q);
    imprimir(t);

    destroir(p);
    destroir(q);
    destroir(t);


    return 0;
}