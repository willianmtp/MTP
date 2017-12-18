#include <stdio.h>
#include "matriz.h"

/*Algoritmo da Multiplicação de Matrizes:
Matriz multiplicaMat(Matriz A, Matriz B){
    Matriz C;
    float soma;
    int i, j, k;
    if (A.col == B.lin){
        C = criarMatriz(A.lin , B.col);
        for(i = 0; i < A.lin; i++)
            for(j = 0; j < B.col; j++){
                soma = 0;
                for (k = 0; k < A.col; k++)
                    soma += A.m[i][k] * B.m[k][j];
                C.m[i][j] = soma;
            }
    }else{
    C = criarMatriz(0,0);
    }
    return C;
}
*/

int main(){
    Matriz a,b,c;
    int x,y,i,j;
    printf("Insira a ordem da primeira matriz: ");
    scanf("%i%i",&x,&y);
    a=criarMatriz(x,y);
    preencherMatriz(a);
    printf("\nInsira a ordem da segunda matriz: ");
    scanf("%i%i",&i,&j);
    b=criarMatriz(i,j);
    preencherMatriz(b);
    if(y!=i){
        printf("\nOperacao impossivel");
        return 0;
    }
    c=multiplicaMat(a,b);
    imprimirMatriz(c);
    destruirMatriz(a);
    destruirMatriz(b);
    destruirMatriz(c);
    return 0;
}
