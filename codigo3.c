#include <stdio.h>

int main(){
	int linhas, colunas, valor;
	
	printf("Digite a quantidade de fileiras: ");
	scanf("%d", &linhas);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	printf("Digite o valor de X: ");
	scanf("%d", &valor);
	
	int matriz[linhas][colunas], i, j, cont = 0; 
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] == valor){
				cont++;
			}
		}
	}
	
	printf("Existe(m) %d num(s) %d.", cont, valor);
	return 0; 
}
