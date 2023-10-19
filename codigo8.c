#include <stdio.h>

void leiaMatriz(double matriz[][3], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            scanf("%lf", &matriz[i][j]);
}

void imprimaMatriz(double matriz[][3], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++)
            printf("%.2lf |", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    int linhas, colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    double mat1[3][3], mat2[3][3], mat3[3][3] = {0}, constante = 0;

    leiaMatriz(mat1, linhas, colunas);
    leiaMatriz(mat2, linhas, colunas);

    char escolha;
    do {
        printf("(a) somar as duas matrizes\n");
        printf("(b) subtrair a primeira matriz da segunda\n");
        printf("(c) adicionar uma constante às duas matrizes\n");
        printf("(d) imprimir as matrizes\n");
        printf("(e) sair\n");
        scanf(" %c", &escolha);

        int i, j;
        switch (escolha) {
            case 'a':
                for (i = 0; i < linhas; i++) {
                    for (j = 0; j < colunas; j++)
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
                break;
            case 'b':
                for (i = 0; i < linhas; i++) {
                    for (j = 0; j < colunas; j++)
                        mat3[i][j] = mat1[i][j] - mat2[i][j];
                }
                break;
            case 'c':
                printf("Digite o valor da constante: ");
                scanf("%lf", &constante);
                for (i = 0; i < linhas; i++) {
                    for (j = 0; j < colunas; j++) {
                        mat1[i][j] += constante;
                        mat2[i][j] += constante;
                    }
                }
                break;
            case 'd':
                imprimaMatriz(mat1, linhas, colunas);
                imprimaMatriz(mat2, linhas, colunas);
                imprimaMatriz(mat3, linhas, colunas);
                break;
            case 'e':
                break;
            default:
                printf("Digite uma opção válida.\n");
        }
    } while (escolha != 'e');

    return 0;
}

