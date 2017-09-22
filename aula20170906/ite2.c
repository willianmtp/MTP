#include <stdio.h>

int main() {
   int B, Exp, i, aux=1;
    printf("Digite um valor inteiro para a base: ");
    scanf("%d",&B);
    printf("\nDigite um valor inteiro para a potencia: ");
    scanf("%d",&Exp);
    for(i=0; i<Exp;i++)
    {
        aux = aux * B;
    }
    printf("\nO Resultado e: %d",aux);
   return 0;

}


