#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[2][2];
    int i, j, soma =0;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite um valor para [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);  // Lê o valor e armazena na matriz
        }
    }

    // Opcional: mostrar os valores lidos
    printf("Matriz digitada:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            soma = soma + mat[i][j];
        }
        printf("\n");
    }
    printf("%d", soma);

    return 0;
}
