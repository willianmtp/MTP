
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int vetor[] = {0,1,2,4,8,16,1025};
    unsigned char * ponteiro; // ponteiro para byte
    int nbytes = sizeof(vetor);
    int i = 0, contagem = 0;
    printf(" end. incicial de vetor: %p\n", vetor);
    for(ponteiro = (unsigned char *) vetor; i < nbytes; i++)
    {
        if (!ponteiro[i]) contagem++;
        // if (*(ponteiro+i) == 0x00) contagem++;
        printf("End.: %p dado: %d, %X\n",
               ponteiro+i, ponteiro[i], *(ponteiro+i));
    }
    printf("De %d bytes, %d estao com 0x00.\n",
           nbytes, contagem);

    return EXIT_SUCCESS;
}

