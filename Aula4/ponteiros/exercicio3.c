#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* Crie um programa que contenha um vetor de float contendo dez
   elementos. Imprima na tela o endereço de cada posição desse vetor*/


int main() {
    setlocale(LC_ALL, "Portuguese");

    float vetor[] = {1,2,3,4,5,6,7,8,9,0};
    float *pVetor;


    for(int i = 0; i < 10; i++) {
        pVetor = &vetor[i];
        printf("Posição %i : %p\n", i, pVetor);
    }

    return(0);
}
