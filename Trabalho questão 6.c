#include <stdio.h>
#include <stdlib.h>

    int vetor[10] = {3,};
    int cont;
    int main()

{
    printf("Dobro de Valores em Vetores: \n");
    printf("%d ",vetor[0]);
    for(cont = 1; cont < 10;cont++){
    vetor[cont] = (vetor[cont-1] *2);
    printf("%d ", vetor[cont]);
    }
    return 0;
}