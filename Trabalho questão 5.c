#include <stdio.h>
#include <stdlib.h>

    int vetor[10] = {};
    int cont;
    int main()

{
    printf("\n Valores em Vetores: \n");
    for (cont = 0; cont <10; cont++){
    vetor[cont] = (rand() % 10);
    printf("%d ",vetor[cont]);
    }
    printf("\n Valores Invertidos em Vetores \n");
    for (cont = 9; cont >= 0; cont--){
    printf("%d ",vetor[cont]);
    }
    return 0;
}