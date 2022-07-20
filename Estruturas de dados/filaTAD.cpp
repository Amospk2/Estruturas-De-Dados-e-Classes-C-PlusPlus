#include <iostream>

using namespace std;

struct No{
    int i;
    No * prox;

}* ultimo = NULL;

int empty();
void adicionar(int i);
int imprime();
void remover();

int main()
{

    for(int i = 0;i<3;i++)
    {
        adicionar(i);
    }
    remover();
    remover();
    remover();
    imprime();
    cout << empty() << endl;
    for(int i = 0;i<3;i++)
    {
        adicionar(i);
    }
    imprime();

    
}


void adicionar(int i)
{
    No * novono =(No *)malloc(sizeof(No *));
    novono->i = i;
    if(ultimo == NULL)
    {
        novono->prox = NULL;
        ultimo = novono;
    }
    else
    {
        novono->prox = ultimo;
        ultimo = novono;
    }
}

int empty()
{
    if(ultimo == NULL)
        return 1;
    else 
     return 0;
}

int imprime()
{
    if(ultimo == NULL)
    {
        return 1;
    }
    else
    {
        cout << ultimo->i << " ";
        ultimo = ultimo->prox;
        return imprime();
    }
}

void remover()
{
    No * aux = ultimo, * aux2;

    if(!empty())
    {
        if(aux->prox == NULL)
        {
            free(aux);
            ultimo = NULL;
        }
        else
        {
            while(aux->prox != NULL)
            {
                aux2 = aux;
                aux = aux->prox;   

            }
            free(aux);
            aux2->prox = NULL;
        }
    }

}









