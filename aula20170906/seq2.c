#include <stdio.h>

int main() {
float base, altura, area;
printf("Entre com base do triangulo:");
scanf("%f", &base);

printf("Entre com altura do triangulo:");
scanf("%f", &altura);

area = (base*altura)/2;
printf("Area triangulo: %.3f\n", area);

return 0;

}
