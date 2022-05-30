#include <stdio.h>
#include <locale.h>

/*1. Faça um programa que leia um número inteiro e o imprima, então leia um número real e
também o imprima.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroInteiro = 0;
    float numeroReal = 0;

    printf("Digite um número inteiro:");
    scanf("%d", &numeroInteiro);
    printf("\n\nNúmero Inteiro: %d", numeroInteiro);

    printf("\n\nDigite um número real:");
    scanf("%f", &numeroReal);
    printf("\n\nNúmero Real: %f", numeroReal);

    return(0);
}
