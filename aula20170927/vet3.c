#include <stdio.h>
#include <stdlib.h>
#define N 10

int main () {
int i,x=0;
int num[N],soma=0,produto=1;

for (i=0;i<N;i++)  {
printf("\nDigite valor da posicao %d :  ",i+1);
scanf("%d",&num[i]);
}
for (i=0;i<N;i++)
{
    soma+=num[i];
    produto*=num[i];
}

   printf (" soma: %d ",soma);
    printf (" \n produto : %d ",produto);
return 0;
}
