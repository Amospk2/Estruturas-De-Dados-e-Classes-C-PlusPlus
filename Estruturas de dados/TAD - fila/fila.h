#define TamFIla 10

typedef int elem;
typedef struct fila Fila;

Fila * criar();
int inserir(Fila * F, elem x);
int remover(Fila * F, elem * x);
int IsEmpty(Fila * F);
int IsFull(Fila * F);
void destruir(Fila * F);