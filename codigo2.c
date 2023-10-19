#include <stdio.h>
#include <limits.h>

int main(){
	int linhas, colunas;
	
	printf("Digite a quantidade de fileiras: ");
	scanf("%d", &linhas);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	
	int matriz[linhas][colunas], i, j, menor = INT_MAX;
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
	}
	
	printf("Menor: %d", menor);
	return 0; 
}
