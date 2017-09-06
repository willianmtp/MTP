#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
srand(time(0));

 int x = rand()%100;
 int menor = 101, maior = 293;
 int y = menor + rand()%(maior-menor+1);

 printf("entre 0 e 99    : %d\n", x);
 printf("entre 101 e 293 : %d\n", y);

return 0;

}
