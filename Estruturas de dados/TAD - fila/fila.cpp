#include <iostream>
#include <assert.h>
#include "fila.h"

struct fila
{
    int start, end, all;
    elem values[TamFIla];
};


Fila * criar()
{
    Fila  * F;
    F = (Fila *) malloc(sizeof(Fila));

    assert(F!= NULL);
    F->all = 0;
    F->start = 0;
    F->end = 0;

    return F;
}


int inserir(Fila * F, elem x)
{
    if(IsFull(F))
        return 0;
    
    F->values[F->end] = x;
    F->end = (F->end + 1)% TamFIla;
    F->all++;
    return 1;
}



int remover(Fila * F, elem * x)
{
    if(IsEmpty(F))
        return 0;

    *x = F->values[F->start];
    F->start = (F->start + 1) % TamFIla;
    F->all--;

    return 1;
}


int IsEmpty(Fila * F)
{
    assert(F!=NULL);

    if(F->all==0)
        return 1;
    else
        return 0;
}


int IsFull(Fila * F)
{
    assert(F!=NULL);

    if(F->all==TamFIla)
        return 1;
    else
        return 0;
}


void destruir(Fila * F)
{
    if(F!=NULL)
        free(F);   
}