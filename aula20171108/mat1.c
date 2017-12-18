
#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    Matriz A, adjA;
    int ordem;
    printf("Entre com a ordem da matriz: ");
    scanf("%d" ,&ordem);
    A = criarMatriz(ordem, ordem);
    preencherMatriz(A);
    printf("Original:\n");
    imprimirMatriz(A);
    adjA = adjunta(A);
    printf("Adjunta:\n");
    imprimirMatriz(adjA);
    destruirMatriz(A);
    destruirMatriz(adjA);
    return EXIT_SUCCESS;
    }
