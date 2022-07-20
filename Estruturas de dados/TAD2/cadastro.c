#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"


cadastro *criar(char * nome, char *endereco);
void encontrar(char * n, cadastro ** cadastros, int t);
void destruir(cadastro **p);
char *infos();
void imprimir(int total, cadastro ** cads);



cadastro *criar(char * nome, char * endereco) 
{
    
    cadastro * c = (cadastro *) malloc(sizeof(cadastro));

    if(c == NULL)
        return NULL;

    c->nome = nome;
    c->endereco = endereco;

    return c;


}

void encontrar(char * n, cadastro ** cadastros, int t)
{


    for(int i = 0;i<t;i++)
    {
        if(n == cadastros[i]->nome)
        {
            printf("%s\n", cadastros[i]->endereco);
            break;
        }

    }

}
 

void imprimir(int total, cadastro ** cads)
{
    for(int i = 0;i<total;i++)
    {
        printf("%s\t", cads[i]->nome);
        printf("%s\n", cads[i]->endereco);
    }
}

void destruir(cadastro **p)
{
    if(p==NULL)
    {
        free(p);
        p = NULL;
    }
}



char *infos()
{
    char c, * inf;
    int t = 10, i = 0;

    inf = (char *) malloc(t * sizeof(char));
    
    
    while((c = getchar()) != '\n')
    {
        inf[i++] = c;

        if(i == t-1)
        {   
            t+=10;
            inf = (char *) realloc(inf, t*sizeof(char));
        }

    }

    inf = (char *) realloc(inf, (i+2)*sizeof(char));

    return inf;
}