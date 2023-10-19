#include <stdio.h>

int main(){
	int linhas1, colunas1, linhas2, colunas2;
	
	scanf("%d", &linhas1);
	scanf("%d", &colunas1);
	scanf("%d", &linhas2);
	scanf("%d", &colunas2);
	
	if(linhas1 != linhas2 || colunas1 != colunas2) {
		printf("ERRO: As matrizes devem ser de mesma ordem.");
	} else{
	
		int matriz1[linhas1][colunas1], matriz2[linhas2][colunas2], i, j, soma = 0; 
		for(i = 0; i < linhas1; i++){
			for(j = 0; j < colunas1; j++){
				scanf("%d", &matriz1[i][j]);
			}
		}
		
		for(i = 0; i < linhas2; i++){
			for(j = 0; j < colunas2; j++){
				scanf("%d", &matriz2[i][j]);		
			}
		}
		
		system("cls");
		
		for(i = 0; i < linhas1; i++){
			for(j = 0; j < colunas1; j++){
				soma = matriz1[i][j] + matriz2[i][j];
				printf("%d ", soma);		
			}
			printf("\n");
		}
	}	
	return 0; 
}

