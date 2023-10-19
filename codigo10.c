#include <stdio.h>

int main(){
    int matriz[25][25] = {0}, i, j, k, quantidadeRaios, aux = 0;
    
    scanf("%d", &quantidadeRaios);
    
    for (i = 0; i < quantidadeRaios; i++) {
        scanf("%d %d", &j, &k);
        matriz[j][k]++;    
    }
    
    for (i = 0; i < 11; i++) {
        for (j = 0; j < 11; j++) {
            if(matriz[i][j] > 1){
                aux = 1;
            }
        }
    }
    
    system("cls");
    
    printf("%d", aux);
    return 0;
}

