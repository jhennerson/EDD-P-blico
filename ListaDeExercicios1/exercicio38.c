#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*38. Ler uma dist�ncia em milhas e apresent�-la convertida em quil�metros.
A f�rmula de convers�o �: K=1,61*M , sendo K a dist�ncia em quil�metros e M em milhas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float distancia, conversao;

    printf("*****CONVERS�O MILHAS PARA QUIL�METROS*****\n\n");
    printf("Insira o valor da dist�ncia em milhas: ");
    scanf("%f", &distancia);

    conversao = distancia * 1.61;

    printf("\n\nA dist�ncia convertida em quil�metros �: %.2f km", conversao);


    return (0);

}
