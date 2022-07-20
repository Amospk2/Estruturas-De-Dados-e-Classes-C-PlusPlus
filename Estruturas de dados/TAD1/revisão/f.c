#include <stdlib.h>
#include <stdio.h>

#include "f.h"



racional* criar(int p, int q)
{
    if(q == 0)
        return NULL;
    racional* fracao = (racional*)malloc(sizeof(racional));

    if(fracao == NULL)
        return NULL;

    fracao->n = p;
    fracao->d = q;

    return fracao;
}

int mmc(int a, int b)
{
    int r = 0, axb = a*b;

    while(b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }

    return axb/a;

}


racional * soma(racional * p, racional * q)
{
    if(p == NULL || q== NULL)
        return NULL;

    int m =  mmc(p->d, q->d);

    racional * som = (racional *)malloc(sizeof(racional));

    if(som == NULL)
        return NULL;

    som->n = (m / p->d * p->n) +  (m / q->d * q->n);
    som->d = m;

    return som;
}

void imprimir(racional * p)
{
    if(p != NULL)
        printf("%i / %i\n", p->n, p->d);
}



void destroir(racional * p)
{
    if(p != NULL)
        free(p);
}


