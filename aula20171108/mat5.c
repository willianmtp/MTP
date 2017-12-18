#include <stdio.h>
#include "matriz.h"

int main(){
    Matriz A,b,x,Ai;
    int e,i;
    printf("Insira a quantidade de equacoes e icognitas do sistema: ");
    scanf("%i%i",&e,&i);
    if(e!=i){
        printf("\nSolucao impossivel");
        return 0;
    }
    A=criarMatriz(e,i);
    b=criarMatriz(e,1);
    x=criarMatriz(e,1);
    printf("\nMatriz dos coeficientes:\n");
    preencherMatriz(A);
    printf("\nVetor de termos independentes:\n");
    preencherMatriz(b);
    Ai=inversa(A);
    x=multiplicaMat(Ai,b);
    imprimirMatriz(x);
    destruirMatriz(A);
    destruirMatriz(b);
    destruirMatriz(x);
    destruirMatriz(Ai);
    return;
}
