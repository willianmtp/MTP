#include <stdio.h>
#include <stdlib.h>




int main () {

int i;
char frase[100];


printf("entre com uma frase : ");
fgets(frase,100,stdin);

for (i=0;frase[i]!='\0';i++)
    frase[i]=toupper(frase[i]);


for (i=0;frase[i]!='\0';i++)
{

    if (frase[i]=='A')
       frase[i]='4';

        if (frase[i]=='E')
       frase[i]='3';

        if (frase[i]=='I')
       frase[i]='1';

        if (frase[i]=='O')
       frase[i]='0';

        if (frase[i]=='S')
       frase[i]='5';

        if (frase[i]=='G')
       frase[i]='6';


}


printf("%s",frase);


return 0;
}
