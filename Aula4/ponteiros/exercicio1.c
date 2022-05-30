#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Elabore um programa com 3 vari�veis do tipo int e 3 ponteiros para o tipo int
  Receba via teclado os valores de cada vari�vel do tipo int;
  Fa�a com que os ponteiros apontem para as vari�veis recebidas;
  Modifique os valores contidos nos endere�os vari�veis recebidas atrav�s dos
  ponteiros, somando 100 ao seu valor inicial. Fa�a isso passando os
  ponteiros como argumento para a fun��o que ser� do tipo void;
  Imprima os valores finais de cada vari�vel;
  Entregue no Moodle como atividade 1.*/

void soma(int *p);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, v3, *p1, *p2, *p3;

    p1 = &v1;
    p2 = &v2;
    p3 = &v3;

    printf("Insira os valores das vari�veis:\n");

    printf("\nVariavel 1:");
    scanf("%d", &v1);
    printf("\nVariavel 2:");
    scanf("%d", &v2);
    printf("\nVariavel 3:");
    scanf("%d", &v3);

    soma(p1);
    soma(p2);
    soma(p3);

    printf("\n\nNovo valor da Vari�vel 1: %d", v1);
    printf("\nNovo valor da Vari�vel 2: %d", v2);
    printf("\nNovo valor da Vari�vel 3: %d", v3);

    return(0);
}

void soma(int *p) {

    (*p) = (*p) + 100;
}
