#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int **matrizA, **matrizB, linhas, colunas;

    printf("SOMA DE MATRIZES\n\n");

    printf("Insira o número de linhas da matriz A: ");
    scanf("%d", &linhas);
    printf("\nInsira o número de colunas da matriz A: ");
    scanf("%d", &colunas);

    matrizA = (int**) malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++) {
        matrizA[i] = (int*) malloc(colunas * sizeof(int));
    }

    if(matrizA == NULL) {
        printf("\nEspaço insulficiente!");
        exit(1);
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("\nDigite o valor de matriz A %d,%d: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    system("cls");

    printf("SOMA DE MATRIZES\n\n");

    printf("Insira o número de linhas da matriz B: ");
    scanf("%d", &linhas);
    printf("\nInsira o número de colunas da matriz B: ");
    scanf("%d", &colunas);

    matrizB = (int**) malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++) {
        matrizB[i] = (int*) malloc(colunas * sizeof(int));
    }
    if(matrizB == NULL) {
        printf("\nEspaço insulficiente!");
        exit(1);
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("\nDigite o valor de matriz B %d,%d: ", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    system("cls");

    printf("RESULTADO: \n\n");

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf(" %d ", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < linhas; i++) {
        free(matrizA[i]);
    }
    free(matrizA);

    for(int i = 0; i < linhas; i++) {
        free(matrizB[i]);
    }
    free(matrizB);

    return(0);
}
