#include <stdlib.h>
#include <stdio.h>
#include "conjuntos.h"

Uconjunto *Criar_conjunto(int A[], int size)
{

    
    if(A == NULL)
        return NULL;


    int igual = 0;
    for(int i = 0;i<3;i++)
    {
       for(int j = 0;j<3;j++)
       {
           if(A[i] == A[j])
           {
               igual++;
           }
       }
       if(igual == 2)
            return NULL;
        else
            igual = 0;
    }


    Uconjunto * c;
    c = (Uconjunto *) malloc(sizeof(Uconjunto));

    if(c == NULL)
        return NULL;

    c->p = A;
    c->size_c = size;

    return c;

}

Uconjunto *Uniao(Uconjunto * A, Uconjunto * B)
{
    Uconjunto * uniao;
    uniao = (Uconjunto *) malloc(sizeof(Uconjunto));
    if(uniao == NULL)
        return NULL;

    uniao->size_c = (A->size_c + B->size_c);
    uniao->p = (int *) malloc(uniao->size_c*(sizeof(int)));

    if(uniao->p == NULL)
        return NULL;


    for(int i = 0;i<A->size_c;i++)
    {
        uniao->p[i] = A->p[i];
    }
    
    for(int i = 0, j = A->size_c;j<uniao->size_c;i++, j++)
    {
        uniao->p[j] = B->p[i];
    }

    return uniao;
}



Uconjunto *interseccao(Uconjunto * A, Uconjunto * B)
{
    int maior = B->size_c;
    if(A->size_c  > B->size_c)
        maior = A->size_c;

    Uconjunto * inters;

    inters = (Uconjunto *) malloc(sizeof(Uconjunto));

    if(inters == NULL)
        return NULL;

    int * inter = (int *) malloc(maior * sizeof(int));

    if(inter == NULL)
        return NULL;

    int inter_pos = 0;

    for(int i = 0;i<A->size_c;i++)
    {
        for(int j = 0;j<B->size_c;j++)
        {
            if(A->p[i] == B->p[j])
            {
                 inter[inter_pos++] = A->p[i];
                break;
            }
        }
    }

    inters->p = inter;
    inters->size_c = inter_pos;

    return inters;
}




Uconjunto *Diferenca(Uconjunto * A, Uconjunto * B)
{
    Uconjunto * dife;

    dife = (Uconjunto *) malloc(sizeof(Uconjunto));


    int * dif = (int *) malloc( 3 * sizeof(int));

    if(dif == NULL)
        return NULL;



    int dif_pos = 0, valide= 1;

    for(int i = 0;i<A->size_c;i++)
    {
        for(int j = 0;j<B->size_c;j++)
        {
            if(A->p[i] == B->p[j])
                valide = 0;
        }

        if(valide)
            dif[dif_pos++] = A->p[i];
        else
            valide = 1;
    }

    dife->p = dif;
    dife->size_c = dif_pos;
    
    return dife;
}



int Membro(int x, Uconjunto * A)
{
    for(int i = 0;i<A->size_c;i++)
    {
        if(x == A->p[i])
            return 1;
    }
    return 0;
}



Uconjunto *Inserir(int x, Uconjunto * A)
{
    A->size_c+=1;
    A = (Uconjunto *)realloc(A, A->size_c);

    if(A==NULL)
        return NULL;

    A->p[A->size_c-1] = x;

    
}


Uconjunto *Remover(int x, Uconjunto * A)
{


    int aux = 0, pos = 0, i = 0;


    for(;i<A->size_c;i++)
    {
        if(x == A->p[i])
        {
            pos = i;
            break;
        }
    }
        
    if(i == A->size_c)
        return NULL;
    

    for(int i = pos;i<A->size_c-1;i++)
    {
        aux = A->p[i];
        A->p[i] = A->p[i+1];
        A->p[i+1] = aux;

    }

    A->size_c-=1;
    A = (Uconjunto *)realloc(A, A->size_c);

    if(A==NULL)
        return NULL;


    
}


Uconjunto *Atribuir(Uconjunto * A, Uconjunto * B)
{
    B->p = (int *)realloc(B->p, A->size_c*(sizeof(int)));

    for(int i = 0;i<A->size_c;i++)
        B->p[i] = A->p[i];
    B->size_c = A->size_c;

}


int Min(Uconjunto * A)
{
    int min = A->p[0];
    
    for(int i = 1;i<A->size_c;i++)
    {
        if(min > A->p[i])
            min = A->p[i];
    }
    return min;
}

int Max(Uconjunto * A)
{
    int max = A->p[0];
    
    for(int i = 1;i<A->size_c;i++)
    {
        if(max < A->p[i])
            max = A->p[i];
    }
    return max;
}





int iIgual(Uconjunto * A, Uconjunto * B)
{
    if(A->size_c != B->size_c)
        return 0;

    int n = 0;

    for(int i = 0;i<A->size_c;i++)
    {
        for(int j = 0;j<B->size_c;j++)
        {
            if(A->p[i] == B->p[j])
            {
                n++;
                break;
            }
        }
    }

    if(n == A->size_c)
        return 1;
    else
        return 0;

}


void Imprimir(Uconjunto * A)
{
    for(int i = 0;i<A->size_c;i++)
    {
        printf("%i\t", A->p[i]);
    }
    printf("\n");
} 


void Liberar(Uconjunto * A)
{
    free(A);
}

