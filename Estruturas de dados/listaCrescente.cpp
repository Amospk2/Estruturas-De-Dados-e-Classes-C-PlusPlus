#include <iostream>


using namespace std;

struct No{
    int i;
    No * p, * a;
}*ini = NULL, *fim = NULL;



void create(int i);
int imprime();
int exist(int i);
int happen(int i);
void remove(int i);
void removeALL(int i);

int main()
{  
    
    int x = 0;

    for(int i = 0;i<5;i++)
    {   
        cout << "Informe 5 valores:" << endl;
        cin >> x;
        create(x);
    }
    cout << endl;
    imprime();
    
    cout << endl;
    cout << "Insira um valor para remoção:" << endl;
    cin >> x;
    remove(x);
    imprime();
    
    cout << endl;
    cout << "Insira um valor para remover todas as ocorrencias:" << endl;
    cin >> x;
    removeALL(x);
    imprime();
    
    


    return 0;
}


void create(int i)
{

    No * novono = (No *)malloc(sizeof(No *));
    novono->i = i;

    if(ini == NULL and fim== NULL)
    {
        novono->a = NULL;
        novono->p = NULL;
        ini = novono;
        fim = novono;

    }
    else if(ini->a == fim->a and ini->p == fim->p)
    {
        No * aux = ini;

        if(aux->i > i)
        {
            novono->a = NULL;
            novono->p = aux;
            aux->a = novono;
            ini = novono;
            fim = aux;
        }
        else
        {
            novono->a = aux;
            novono->p = NULL;
            aux->p = novono;
            fim = novono;
            ini = aux;
        }

    }
    else
    {
        No * aux = ini, * aux2;

        while(aux->p!= NULL){

            if(aux->i > i)
                break;

            aux2 = aux;
            aux = aux->p;
        }



        if(aux->i < i and aux->p == NULL)
        {

            aux->p = novono;
            novono->a = aux;
            novono->p = NULL;
            fim = novono;
        }
        else if(aux->i > i and aux->a == NULL)
        {
            
            aux->a = novono;
            novono->p = aux;
            novono->a = NULL;
            ini = novono;
        }else
        {
            
            aux2->p = novono;
            novono->a = aux2;

            aux->a = novono;
            novono->p = aux;

        }
        




    }


}


int imprime()
{
    No * aux = ini;
    do
    {
        cout << aux->i << " ";
        aux = aux->p;

    }while(aux != NULL);

}



int exist(int i)
{
    No * aux = ini;
    
    while(aux != NULL)
    {   
        if(aux->i == i)
            return 1;

        aux = aux->p;

    }
    return 0;
    
    
}

int happen(int i)
{
    int cont = 0;

    No * aux = ini;
    
    while(aux != NULL)
    {   
        if(aux->i == i)
            cont++;

        aux = aux->p;

    }

    return cont;



}


void remove(int i)
{
    if(exist(i))
    {
        No * aux = ini, * aux2;

        while(aux->p!= NULL){

            if(aux->i == i)
                break;

            aux2 = aux;
            aux = aux->p;
        }



        if(aux->p == NULL)
        {
            aux2->p = NULL;
            fim = aux2;
            free(aux);
        }
        else if(aux->a == NULL)
        {
            aux2 = aux->p;
            aux2->a = NULL;
            ini = aux2;
            free(aux);

        }else
        {
            aux2->p = aux->p;
            aux2 = aux->p;
            aux2->a = aux->a;
            free(aux);

        }
        

    }
}



void removeALL(int i)
{
    for(;exist(i);)
    {
        remove(i);
    }
}

