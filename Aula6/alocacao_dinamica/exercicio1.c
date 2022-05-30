#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimeVetor(int *str, int n);
void preencheVetor(int *str, int n);

int main() {
    setlocale(LC_ALL, "");

    int *str, n;
    str = (int*) malloc(n * sizeof(int));
    if(str == NULL) {
        printf("\nEspaço insuficiente!");
        exit(1);
    }

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    preencheVetor(str, n);
    imprimeVetor(str, n);
    free(str);

    return(0);
}

void imprimeVetor(int *str, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \n", str[i]);
    }
}

void preencheVetor(int *str, int n) {
    for(int i = 0; i < (n * 2); i++) {
        str[i] = 2 * i + 1;
    }
}
