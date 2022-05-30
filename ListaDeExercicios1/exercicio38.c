#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*38. Ler uma distância em milhas e apresentá-la convertida em quilômetros.
A fórmula de conversão é: K=1,61*M , sendo K a distância em quilômetros e M em milhas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float distancia, conversao;

    printf("*****CONVERSÃO MILHAS PARA QUILÔMETROS*****\n\n");
    printf("Insira o valor da distância em milhas: ");
    scanf("%f", &distancia);

    conversao = distancia * 1.61;

    printf("\n\nA distância convertida em quilômetros é: %.2f km", conversao);


    return (0);

}
