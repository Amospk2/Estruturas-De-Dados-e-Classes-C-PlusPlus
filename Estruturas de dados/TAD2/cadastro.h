typedef struct
{
    char * nome, * endereco;

}cadastro;


char *infos();
cadastro *criar(char * nome, char * endereco);
void encontrar(char * n, cadastro ** cadastros, int t);
void destruir(cadastro **p);
void imprimir(int total, cadastro ** cads);