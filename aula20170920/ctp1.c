#include <stdio.h>
#include <stdlib.h>
#define N 256

int main () {
 char frase [N];
 int i;
    printf ("Entre com uma frase:\n");
    fgets(frase, N, stdin);
    for(i = 0; frase[i]; i++)
        frase[i] = toupper(frase[i]);
    printf("%s", frase);
  return EXIT_SUCCESS;

 }
