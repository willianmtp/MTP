#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sorteio(int n)
{
    int i, vet[10];
    for (i=0; i<10; i++)
    {
        printf("\nDigite enter para sortear: ");
        getchar();
        vet[i]=(rand()%10)+1;
        printf("Numero sorteado: %d", vet[i]);
        if (vet[i]==n)
            printf("\n\tPARABENS!\n");
    }
}
int main(){
    srand(time(NULL));
    int n;
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &n);
    getchar();
    sorteio(n);
    return 0;
}
