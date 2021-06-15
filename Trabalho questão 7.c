#include <stdio.h>
#include <stdlib.h>

    int vetor[10] = {};
    int cont;
    int numEsc;
    int main() {
    
    printf("===== SOMA 5 AO NÚMERO =====\n");
    printf("Escolha um número:");
    scanf("%d", &numEsc);
    vetor[0] = numEsc;
    printf("0: {%d} ",vetor[0]);
    for (cont = 1; cont < 10; cont ++){
    vetor[cont] = (vetor[cont-1] + 5);
    printf(" %d: {%d} ",cont, vetor[cont]);
    }
    printf("\n FIM!");   

}