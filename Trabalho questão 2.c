#include<stdio.h>
#include<math.h>
int main()
{

    int num;
    int fat;
    int result;
    fat = 1;
    printf("Qual o numero que você deseja ver o fatorial?\n");
    scanf("%d", &num);
    printf(" %d! =", num);
    while(num >= 1){
        
    printf(" %d ", num);      
    fat *= num;
    num--;
    }
    
    printf(" = %d",fat);
return 0;
}