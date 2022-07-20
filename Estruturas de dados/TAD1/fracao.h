typedef struct
{
    int p, q;
}racional;


racional *soma(racional *a, racional *b);
racional *criar(int p, int q);
void imprimir(racional *p);
void destruir(racional *p);
