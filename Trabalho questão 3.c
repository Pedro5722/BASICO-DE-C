#include <stdio.h>
#include <stdlib.h>

    int cont;
    int numEsc;
    int main()
{
    printf("===== CONTAGEM =====\n");
    printf("Escolha um numero: ");
    scanf("%d", &numEsc);
    for (cont = 0; cont < numEsc; cont=cont + 3){
    printf("%d \t", cont);
    }
    printf("ACABOU!!!");   
}