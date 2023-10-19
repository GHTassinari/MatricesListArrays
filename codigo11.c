#include <stdio.h>

int main() {
    int quantidadeRetangulos, area = 0, i, j, k, m, matriz[10][10] = {0}, cont = 0;
    int xi, xf, yi, yf;
    scanf("%d", &quantidadeRetangulos);
    
    for (i = 0; i < quantidadeRetangulos; i++) { 
        scanf("%d %d %d %d", &xi, &xf, &yi, &yf);
        for(j = xi; j <= xf; j++){
            for(k = yi; k <= yf; k++){
                matriz[j][k] = 1;    
            }
        }
    }
    
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(matriz[i][j] != 0){
                cont++;
            }
            printf("%3d |", matriz[i][j]);
        }
        printf("\n");
    }
    printf("%d", cont);
    
    return 0;
}

