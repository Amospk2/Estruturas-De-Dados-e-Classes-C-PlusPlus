#define tpilha 100

typedef struct stack pilha;


pilha *create(int tamElement);
void destroir(pilha * p);
int Isfull(pilha * p);
int Isempty(pilha * p);
int push(pilha * p, void * x);
int pop(pilha * p, void *x);
int top(pilha * p, void * x);
void topo(pilha * p);