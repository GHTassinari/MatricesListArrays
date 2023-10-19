#include <stdio.h>

int main(){
	int linhas, colunas;
	double valor;
	
	scanf("%d", &linhas);
	scanf("%d", &colunas);
	scanf("%lf", &valor);
	
	int matriz[linhas][colunas], i, j, multiplicacao = 0; 
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	system("cls");
		
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			multiplicacao = matriz[i][j] * valor;
			printf("%d ", multiplicacao);		
		}
		printf("\n");
	}
	
	return 0; 
}

