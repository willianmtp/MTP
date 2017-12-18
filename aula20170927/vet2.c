#include <stdio.h>

#include <stdlib.h>

int main(){

int vet1[10];

int i, n;

for (i=0 ; i<10 ; i++)

{

printf("digite o valor do numero na posicao [%d]: ",i+1 );

scanf("%d", &n);

vet1[i]= n;

}

for (i=9 ; i>=0 ; i--)

{

printf("os numeros invertidos sao:\n %d\n", vet1[i]);

}

return 0;

}
