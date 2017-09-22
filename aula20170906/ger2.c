#include <stdio.h>

int main() {
    int x, i, aux=0;
    printf("Digite um valor inteiro para saber se e perfeito: ");
    scanf("%d",&x);
    for(i=1; i<x;i++)
    {
        if(x%i==0)
            aux = (aux + i);
    }
    if(aux == x)
        printf("\nE perfeito");

    else
        printf("\nNao e perfeito.");
   return 0;

}


