#include <stdio.h>
#include <stdlib.h>


int main(){
    int num1, num2, soma;
    printf("Digite dois numeros reais: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    soma = num1 + num2;

    printf("\nO endereco dos numeros eh: %p, %p, %p", &num1, &num2, &soma);
    printf("\nO valor da soma dos numeros eh: %d", soma);

return EXIT_SUCCESS;
}
