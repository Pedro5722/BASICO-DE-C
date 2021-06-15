#include <stdio.h>
#include <stdlib.h>

    int cont;
    int numEsc;
    int main()
{
    printf("===== CONTAGEM INVERSA =====\n");
    printf("Escolha um numero: ");
    scanf("%d", &numEsc);
    for (cont = numEsc; cont >= 0; cont--){
    printf("%d\t", cont);
    }
    printf("ACABOU!!!");
}