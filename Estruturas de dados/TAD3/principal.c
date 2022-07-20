#include <stdlib.h>
#include <stdio.h>
#include "conjuntos.h"

int main(void)
{
    int * a = (int *) malloc(3 * sizeof(int));
    int * b = (int *) malloc(3 * sizeof(int));

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    b[0] = 1;
    b[1] = 2;
    b[2] = 3;


    Uconjunto * A, * B, * C, * D, * I;
    A = Criar_conjunto(a, 3);
    Imprimir(A);

    B = Criar_conjunto(b, 3);
    Imprimir(B);

    C =Uniao(A, B);
    Imprimir(C);

    I = interseccao(A, B);
    Imprimir(I);

    D = Diferenca(A, B);
    Imprimir(D);
    
    printf("%i\n", Membro(1, A));

    Inserir(6, A);
    Imprimir(A);
    
    Remover(1, B);
    Imprimir(B);

    Atribuir(A, C);
    Imprimir(C);

    printf("%i\n", Min(A));
    printf("%i\n", Max(A));

    printf("%i\n", iIgual(A, B));



    Liberar(A);
    Liberar(B);
    Liberar(C);
    Liberar(D);
    Liberar(I);




    return 0;
}