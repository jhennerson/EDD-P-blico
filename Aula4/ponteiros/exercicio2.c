#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Escreva um programa que contenha duas vari�veis inteiras. Leia essas
  vari�veis do teclado. Em seguida, compare seus endere�os e exiba o
  maior endere�o e o conte�do da vari�vel que este endere�o aponta.*/


int main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, maior;

    printf("Insira um valor para a vari�vel 1: ");
    scanf("%d", &v1);

    printf("\nInsira um valor para a vari�vel 2: ");
    scanf("%d", &v2);

    printf("\nA maior vari�vel � a vari�vel %d.", maior = (&v1 > &v2 ? 1 : 2));

    printf("\n%p", &v1);
    printf("\n%d", v1);

    return(0);
}
