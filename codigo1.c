#include <stdio.h>
#include <limits.h>

int main(){
	int linhas, colunas;
	
	printf("Digite a quantidade de fileiras: ");
	scanf("%d", &linhas);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	
	int matriz[linhas][colunas], i, j, maior = INT_MIN;
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	
	printf("Maior: %d", maior);
	return 0; 
}
