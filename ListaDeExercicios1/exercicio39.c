#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*38. Ler uma dist�ncia em quil�metros e apresent�-la convertida em milhas.
A f�rmula de convers�o �: M=K/1,61 , sendo K a dist�ncia em quil�metros e M em milhas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float distancia, conversao;

    printf("*****CONVERS�O QUIL�METROS PARA MILHAS*****\n\n");
    printf("Insira o valor da dist�ncia em quil�metros: ");
    scanf("%f", &distancia);

    conversao = distancia / 1.61;

    printf("\n\nA dist�ncia convertida em milhas �: %.2f milhas", conversao);


    return (0);

}

