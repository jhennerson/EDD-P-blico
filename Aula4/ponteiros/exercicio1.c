#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Elabore um programa com 3 variáveis do tipo int e 3 ponteiros para o tipo int
  Receba via teclado os valores de cada variável do tipo int;
  Faça com que os ponteiros apontem para as variáveis recebidas;
  Modifique os valores contidos nos endereços variáveis recebidas através dos
  ponteiros, somando 100 ao seu valor inicial. Faça isso passando os
  ponteiros como argumento para a função que será do tipo void;
  Imprima os valores finais de cada variável;
  Entregue no Moodle como atividade 1.*/

void soma(int *p);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, v3, *p1, *p2, *p3;

    p1 = &v1;
    p2 = &v2;
    p3 = &v3;

    printf("Insira os valores das variáveis:\n");

    printf("\nVariavel 1:");
    scanf("%d", &v1);
    printf("\nVariavel 2:");
    scanf("%d", &v2);
    printf("\nVariavel 3:");
    scanf("%d", &v3);

    soma(p1);
    soma(p2);
    soma(p3);

    printf("\n\nNovo valor da Variável 1: %d", v1);
    printf("\nNovo valor da Variável 2: %d", v2);
    printf("\nNovo valor da Variável 3: %d", v3);

    return(0);
}

void soma(int *p) {

    (*p) = (*p) + 100;
}
