/* Codifique o programa dos 2 vetores exemplificado anteriormente e teste
seu funcionamento;
   Imprima os vetores em linhas separadas e identifique-os, em seguida
exiba as posições em que possuem valores comuns ou se não possuem; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int v1[5], v2[5];
    int i = 0, j = 0;
    int flag = 0;
    for(i = 0; i < 5; i++){
        printf("Informe o valor do elemento %d do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }
    for(j = 0; j<5; j++) {
        printf("Informe o valor do elemento %d do vetor 2: ", j + 1);
        scanf("%d", &v2[j]);
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(v1[i] == v2[j]) {
                printf("Valores iguais na posição: %d e %d\n", i + 1, j +1);
            }
        }
    }
    printf("\n******************************************\n");
    printf("\nVetor 1:");

    for(i = 0; i < 5; i++) {
        printf("%d", v1[i]);
    }
    printf("\nVetor 2:");
    for(i = 0; i < 5; i++) {
        printf("%d", v2[i]);
    }
        for(i = 0; i < 5; i++) {
            for(j = 0; j < 5; j++) {
                if(v1[i] == v2[j]) {
                    if(flag == 0){
                        printf("\n\nPosições iguais nos vetores:\n");
                        flag = flag + 1;
                    }
                    printf("\nVetor 1: (%d) e Vetor 2: (%d)\n", i + 1, j +1);
                }
            }
        }
    if(flag < 1) {
         printf("\nOs vetores não possuem valores em comum!");
    }
    return 0;
}
