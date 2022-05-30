#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*38. Ler uma distância em quilômetros e apresentá-la convertida em milhas.
A fórmula de conversão é: M=K/1,61 , sendo K a distância em quilômetros e M em milhas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float distancia, conversao;

    printf("*****CONVERSÃO QUILÔMETROS PARA MILHAS*****\n\n");
    printf("Insira o valor da distância em quilômetros: ");
    scanf("%f", &distancia);

    conversao = distancia / 1.61;

    printf("\n\nA distância convertida em milhas é: %.2f milhas", conversao);


    return (0);

}

