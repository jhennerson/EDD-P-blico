#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Escreva um programa que contenha duas variáveis inteiras. Leia essas
  variáveis do teclado. Em seguida, compare seus endereços e exiba o
  maior endereço e o conteúdo da variável que este endereço aponta.*/


int main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, maior;

    printf("Insira um valor para a variável 1: ");
    scanf("%d", &v1);

    printf("\nInsira um valor para a variável 2: ");
    scanf("%d", &v2);

    printf("\nA maior variável é a variável %d.", maior = (&v1 > &v2 ? 1 : 2));

    printf("\n%p", &v1);
    printf("\n%d", v1);

    return(0);
}
