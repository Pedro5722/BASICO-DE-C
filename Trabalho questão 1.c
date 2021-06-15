#include<stdio.h>
#include<math.h>
int main()
{

    int num;
    int cont;
    int result;
    int numEsc;
 
    printf("Qual o numero que você deseja?\n");
    numEsc = scanf("%d", &num);
cont = 1;
    while(cont < 11) {
    result = num * cont;
    printf(" %d * %d = %d \n", num,cont,result);
    cont++;
  
    }

}