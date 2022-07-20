#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "pilha.h"


struct stack{
    int top;
    void ** values;
    int tElemento;
};

pilha *create(int tamElement)
{
    
    pilha * p = (pilha *) malloc(sizeof(pilha));

    assert(p!=NULL);

    p->values = (void **) malloc(sizeof(void*) * tamElement);

    assert(p->values!=NULL);

    p->top = -1;
    p->tElemento = tamElement;
    return p;
}


void destroir(pilha * p)
{
    while(p->top >= 0)
    {
        free(p->values[p->top]);
        p->top--;
    }

    if(p->values!= NULL)
        free(p->values);

    if(p !=NULL)
        free(p);

    p->values =NULL;
    p == NULL;
}


int Isfull(pilha * p)
{
    assert(p!=NULL);
    
    if(p->top == tpilha-1)
        return 1;
    else
        return 0;
}

int Isempty(pilha * p)
{
    assert(p!=NULL);

    if(p->top == -1)
        return 1;
    else
        return 0;
}

int push(pilha * p, void * x)
{
    assert(p!=NULL);

    if(Isfull(p))
        return -1;
    
    p->top+=1;
    p->values[p->top] = (void *) malloc(p->tElemento);

    assert(p->values[p->top]!=NULL);

    memcpy(p->values[p->top], x, p->tElemento);
    return 1;

}

int pop(pilha * p, void *x)
{

    assert(p!=NULL);

    if(Isempty(p))
    {
        return -1; 
    }
   
    memcpy(x, p->values[p->top], p->tElemento);
    p->top-=1;
    return 1;

}

int top(pilha * p, void * x)
{
    assert(p!=NULL);

    if(Isempty(p))
        return -1;  

    memcpy(x, p->values[p->top], p->tElemento);

    return 1;

}

