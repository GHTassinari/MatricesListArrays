#include <stdio.h>

int main(){
	int linhas, colunas;
	
	printf("Digite a quantidade de fileiras: ");
	scanf("%d", &linhas);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	
	int matriz[linhas][colunas], i, j; 
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int aux = colunas - 1;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			if(j == aux){
				printf("%d | ", matriz[i][j]);
				aux--;
			} else{
				printf("  | ");
			}
		}
		printf("\n");
	}
	
	return 0; 
}

