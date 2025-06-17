#include <stdio.h>

int main()
{
    int num[6];
    int soma = 0;
    int i;
    
    
    for(i=0; i<6; i++){
        printf("digite um numero inteiro");
        scanf("%d", &num[i]);
        soma += num[i];
    }
    printf("%d", soma);
    
    return 0;
}