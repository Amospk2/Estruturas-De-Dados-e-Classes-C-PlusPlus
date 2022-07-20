#include <iostream>



using namespace std;
void imprime();
void create(int i);

struct No 
{
    int i;
    No * a, *p;
}*ini, *fim;


int main()
{


    create(2);
    create(1);
    create(0);
    imprime();



    return 0;
}



void create(int i)
{
    No * novo = (No *)malloc(sizeof(No *));
    novo->i = i;

    if(ini == NULL and fim == NULL)
    {
        ini = novo;
        fim = novo;
        novo->p = NULL;
        novo->a = NULL;
    }
    else
    {
        No * aux = ini,  * aux2;

        if(aux->a == NULL and aux->p == NULL)
        {
            if(i > aux->i)
            {
                novo->a = aux;
                aux->p = novo;
                novo->p = NULL;
                fim = novo;
            }
            else
            {
                novo->p = aux;
                aux->a = novo;
                novo->a = NULL;
                ini = novo;
            }

        }
        else
        {
            while(aux->i < i and aux->p!=NULL)
            {
                aux = aux->p;
            }


            if(aux->p == NULL)
            {
                novo->p= NULL;
                novo->a = aux;
                aux->p = novo;
            }
            else
            {
                aux = aux->p;
                novo->p= aux;
                novo->a = aux->a;
                aux->a = novo;
            }
            

            if(novo->p == NULL)
                fim = novo;

            if(novo->a == NULL)
                ini = novo;


        }



    }


}
/*
N <- 1 -> <- 2 -> N
0
N <- 1 -> <-2-> <- 3 -> N
*/





void imprime()
{
    No *aux = ini;

    while(aux->p != NULL)
    {
        cout << aux->i << endl;
        aux = aux->p;
    }
    cout << aux->i << endl;



}
