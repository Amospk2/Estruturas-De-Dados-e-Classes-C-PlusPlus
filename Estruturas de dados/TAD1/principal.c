#include <stdio.h>
#include "fracao.h"

int main(void)
{
    racional *r, *t;
    r = criar(2, 3);
    t = criar(4, 5);
    racional * q = soma(r, t);
    
    imprimir(r);
    imprimir(t);
    imprimir(q);

    destruir(r);
    destruir(t);
    destruir(q);


    return 0;
}