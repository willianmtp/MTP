#include <stdio.h>
#include <stdlib.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}



int main () {
srand(time(0));
int i,x;
char frase[100];


printf("digite uma frase: ");
fgets(frase,100,stdin);
safeFlush;

for (i=0;i<100;i++)
frase[i] = tolower(frase [i]);
frase[strlen(frase)-1]='\0';

printf("\n %u digitos", strlen (frase));


if (strcmp(frase,"bom dia",7)==0)
    printf("\n Bom dia pra voce tambem");

    else
     printf("\n voce quer dizer : \"%s\" ?",frase);


return 0;
}
