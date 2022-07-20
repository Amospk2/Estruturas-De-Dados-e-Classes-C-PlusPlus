#include <stdio.h>
#include <stdlib.h>
#include "fracao.h"

racional *soma(racional *a, racional *b);
racional *criar(int p, int q);
void imprimir(racional *p);
void destruir(racional *p);


racional *criar(int p, int q)
{
    if(q == 0)
        return NULL;
    
    racional *r = (racional *) malloc(sizeof(racional));

    if(r == NULL)
        return NULL;

    r->p = p;
    r->q = q;

    return r;
    
}

void imprimir(racional *p)
{
    if(p!=NULL)
    {
        printf("%i/%i\n", p->p, p->q);
    }
}

void destruir(racional *p)
{
    if(p != NULL)
    {
        free(p);
        p = NULL;
    }
}


int mdc(int a, int b)
{
    if(b == 0)
        return a;
    else
        return mdc(b, a%b);  
}
int mmc(int a, int b)
{
    return a * b / mdc(a, b);
}

racional *soma(racional *a, racional *b)
{
    if(a == NULL || b == NULL)
        return NULL;

    racional *s = (racional *) malloc(sizeof(racional));
    if(s == NULL)
        return NULL;

    s->q = mmc(a->q, b->q);

    s->p =  (s->q/a->q * a->p) + (s->q/b->q * b->p)  ;


    return s;
    
}



