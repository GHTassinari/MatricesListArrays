#include <stdio.h>

void imprimirMatriz(int matriz[][2], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++)
            printf("%3d |", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    int matrizA[2][3], matrizB[3][2], resultado[2][2], i, j, soma = 0;;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    system("cls");
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            soma += matrizA[i][j] * matrizB[j][0];
        }
        resultado[i][0] = soma;
        soma = 0;
    }
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            soma += matrizA[i][j] * matrizB[j][1];
        }
        resultado[i][1] = soma;
        soma = 0;
    }
    
    imprimirMatriz(resultado, 2, 2);
    return 0;
}

