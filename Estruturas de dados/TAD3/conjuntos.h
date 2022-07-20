typedef struct
{
    int * p;
    int size_c;
}Uconjunto;


Uconjunto *Criar_conjunto(int A[], int size);
Uconjunto *Uniao(Uconjunto * A, Uconjunto * B);
Uconjunto *interseccao(Uconjunto * A, Uconjunto * B);
Uconjunto *Diferenca(Uconjunto * A, Uconjunto * B);
int Membro(int x, Uconjunto * A);
Uconjunto *Inserir(int x, Uconjunto * A);
Uconjunto *Remover(int X, Uconjunto * A);
Uconjunto *Atribuir(Uconjunto * A, Uconjunto * B);
int Min(Uconjunto * A);
int Max(Uconjunto * A);
int iIgual(Uconjunto * A, Uconjunto * B);
void Liberar(Uconjunto * A);
void Imprimir(Uconjunto * A);




