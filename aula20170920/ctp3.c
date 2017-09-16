#include <stdio.h>
#include <stdlib.h>
#inclue <ctype.h>

#define N 256

int main () {
 char frase [N];
 int i;
    printf ("Entre com uma frase:\n");
    fgets(frase, N, stdin);
    for(i = 0; frase[i]; i++)

        frase[i] = i;

    printf("%d", i);
  return EXIT_SUCCESS;

 }
