
#include <iostream>

using namespace std;


struct No{
    int i = 0;
    No * next;
}* topo = NULL;


struct NoF{
    int i;
    NoF * prox;

}* ultimo = NULL;



void push(int i);
int isEmpty();
void pop();
int imprimir();
int top();
int empty();
void adicionar(int i);
int imprime();
int remover();

int main()
{
    int v = 0;
    for(int i = 0;i<5;i++)
    {
        adicionar(i);
    }

    imprime();

    while(!empty())
    {
        v = remover();
        push(v);
    }

    while(!isEmpty())
    {
        cout << top() << endl;
        adicionar(top());
        pop();
    }
    cout << endl;
    imprime();


    return 0;
}



void adicionar(int i)
{
    NoF * novono =(NoF *)malloc(sizeof(NoF *));
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


    NoF * aux = ultimo;

    while(aux!= NULL)
    {
        cout << aux->i << " ";
        aux = aux->prox;
    }
}

int remover()
{
    int v = 0;
    NoF * aux = ultimo, * aux2;

    if(!empty())
    {
        if(aux->prox == NULL)
        {
            v = aux->i;
            free(aux);
            ultimo = NULL;
            return v;
        }
        else
        {
            while(aux->prox != NULL)
            {
                aux2 = aux;
                aux = aux->prox;   

            }
            v = aux->i;
            free(aux);
            aux2->prox = NULL;
            return v;
        }
    }

}



void push(int i)
{

    No * novono = (No *)malloc(sizeof(No *));
    novono->i = i;

    if(topo ==NULL)
    {
        novono->next = NULL;
        topo = novono;
    }
    else
    {
        novono->next = topo;
        topo = novono;
    }
  

}

int isEmpty()
{

    if(topo == NULL)
        return 1;
    else
        return 0;

}


void pop()
{

    if(topo != NULL)
    {
        No * aux;
        aux = topo;
        topo = topo->next;
        free(aux);
    }
    

}



int top()
{
    if(topo != NULL)
        return topo->i;
}

















