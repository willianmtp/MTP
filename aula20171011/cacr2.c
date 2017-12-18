#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(int a, int b, int c){
    float d;
    d=b*b-(4*a*c);
    printf("Delta= %.2f\n", d);
    return d;
}

void raiz (float d, int a, int b, int c){
    float r1, r2;
    if (d>0){
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        printf("Raiz 1: %f\n", r1);
        printf("Raiz 2: %f\n", r2);
    }
    if (d=0){
        r1=-b/(2.0*a);
        r2=-b/(2.0*a);
        printf("Raiz 1: %f\n", r1);
        printf("Raiz 2: %f\n", r2);
    }
    if (d<0){
        printf("Nao existe raiz real de numeros negativos.\n");
    }
}

int main()
{
   int a, b, c;
   float d;
   printf ("Digite os valores de a, b e c da equacao quadratica: \n");
   scanf ("%d %d %d", &a, &b, &c);
   d=delta(a, b, c);
   raiz (d, a, b, c);
   return EXIT_SUCCESS;
}
