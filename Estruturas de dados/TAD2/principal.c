#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"


/*
gcc -c cadastro.c
gcc -c principal.c  
gcc -o principal *.o
*/
int main(void)
{

    char * n = NULL, * e= NULL, *n2 = NULL,*e2 =NULL;

    n = infos();
    e = infos();

    n2 = infos();
    e2 = infos();

    cadastro  *cds[2];

    cds[0] = criar(n, e);
    cds[1] = criar(n2, e2);

    imprimir(2, cds);

    encontrar(n2, cds, 2);

    destruir(cds);

    return 0;
}