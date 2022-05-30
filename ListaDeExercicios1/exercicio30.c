#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*30. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu
para a realização da aposta. Faça um programa que lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float amigo1, amigo2, amigo3, soma, premio;

    printf("*****DIVISÃO DE PRÊMIO DA LOTERIA*****\n\n");

    printf("Insira o valor do prêmio: ");
    scanf("%f", &premio);

    printf("\nInsira o valor que o primeiro amigo apostou: ");
    scanf("%f", &amigo1);

    printf("\nInsira o valor que o segundo amigo apostou: ");
    scanf("%f", &amigo2);

    printf("\nInsira o valor que o terceiro amigo apostou: ");
    scanf("%f", &amigo3);

    soma = amigo1 + amigo2 + amigo3;

    amigo1 = (amigo1 * 100) / soma;

    amigo2 = (amigo2 * 100) / soma;

    amigo3 = (amigo3 * 100) / soma;

    printf("\nCaso os três amigos ganhem o prêmio este será dividido da seguinte forma:\n");
    printf("\nPrimeiro amigo: %.2f", (premio * amigo1) / 100);
    printf("\nSegundo amigo: %.2f", (premio * amigo2) / 100);
    printf("\nTerceiro amigo: %.2f", (premio * amigo3) / 100);

    return (0);
}
