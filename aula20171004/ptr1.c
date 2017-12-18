
#include <stdio.h>
#include <stdlib.h>

int main()

{
    unsigned int dado = 0xFACA8421;
    unsigned char * ponteiro;  // ponteiro para byte
    printf("End.: %p; dado em decimal (unsigned): %u\n", &dado, &dado);
    ponteiro = (unsigned char *) &dado;
    int i;
    for(i = 0; i < sizeof(dado); i++)
      printf(" end.: %p = > %d (decimal), %X (hexadecimal)\n",
             ponteiro+i, *(ponteiro+i), ponteiro[i]);
    return EXIT_SUCCESS;
}
