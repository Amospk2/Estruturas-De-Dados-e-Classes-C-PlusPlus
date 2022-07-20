#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct ponto
{
    int x, y;
}ponto_t;


int main()
{
    pilha * stac;
    stac = create(sizeof(ponto_t));

    ponto_t ponto;

    for(int i = 0;i<10;i++)
    {
        ponto.x = i;
        ponto.y = -i;
        push(stac, &ponto);
    }

    while(!Isempty(stac))
    {
        pop(stac, &ponto);
        printf("(%i - %i)", ponto.x, ponto.y);
    }

    destroir(stac);

    return 0;
}