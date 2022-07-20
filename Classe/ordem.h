
/*

Ordenação de matriz

Uso da class:
#include "ordem.h" importação da classe

Uso: Primeiro indique o a linha, depois a coluna e por ultimo a matriz em questão:

Ordem *Object01 = new Ordem(Line, Column, Values);

Matriz ordination

Use of 'class':
#include "ordem.h" import of class

For use: First say the line, after tge column and the matrix:

Ordem *Object01 = new Ordem(Line, Column, Values);





*/
#include <iostream>

using namespace std;

class Ordem{

public:
    Ordem(int L, int C, int valores[25][25]);
};

Ordem::Ordem(int L, int C, int valores[25][25]){

    int j = 0, aux = 0;
    for(int s = 0;s <L*C;s++){

    for(int i = 0;i<L;i++){
      for(j = 0;j<C-1;j++){
          if(valores[i][j] > valores[i][j+1]){
              aux = valores[i][j];
              valores[i][j] = valores[i][j+1];
              valores[i][j+1] = aux;
          }
        }
    }
    
    for(int i = 0;i<L-1;i++){
        if(valores[i][C-1] > valores[i+1][0]){
            aux = valores[i][C-1];
            valores[i][C-1] = valores[i+1][0];
            valores[i+1][0] = aux;
        }
    }

    }


}