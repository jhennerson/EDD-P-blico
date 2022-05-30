#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.141592

/*41. Ler um ângulo em radianos e apresentá-lo convertido em graus.
A fórmula de conversão é: G = R * 180/PI , sendo G o ângulo em graus e R em radianos e PI = 3,141592.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float angulo, conversao;

    printf("*****CONVERSÃO RADIANOS PARA GRAUS*****\n\n");
    printf("Insira o valor do ângulo em radianos: ");
    scanf("%f", &angulo);

    conversao = angulo * 180 / PI;

    printf("\n\nO ângulo convertido em graus é: %.2f graus", conversao);


    return (0);

}
