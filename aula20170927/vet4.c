#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#define N 1000

int main() {
    srand(time(0));
    int vet[N], i, n;
    int menor=1<<31-1, maior=0;
    printf("entre com um numero inteiro positivo entre 1 e 1000: ");
    scanf ("%d", &n);
    for (i=0; i!=n; i++)
        vet[i]= (rand()%10);
    printf ("\n");
    for (i=0; i!=n; i++)
    {
        if (vet[i]< menor)
            menor=vet[i];
        if (vet[i]>maior)
            maior=vet[i];
    }
    printf ("\n%d, %d", menor, maior);
    return 0;
}
