#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
 srand(time(0));
 float probuser;
 int i, contagem = 0;
 printf ("Entre com uma probalidade [ 0.0~1.0 ]:\n");
 scanf("%f", &probuser);
 for (i = 0; i < 1000; i++) {
    if ((float) rand()/ (float) RAND_MAX < probuser)
        contagem++;
 }
    printf("Contagem em 1000: %d\n", contagem);

  return EXIT_SUCCESS;

 }

