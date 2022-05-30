#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.141592

/*40. Ler um ângulo em graus e apresentá-lo convertido em radianos.
A fórmula de conversão é: R = G*PI/180 , sendo G o ângulo em graus e R em radianos e PI = 3,141592.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float angulo, conversao;

    printf("*****CONVERSÃO GRAUS PARA RADIANOS*****\n\n");
    printf("Insira o valor do ângulo em graus: ");
    scanf("%f", &angulo);

    conversao = angulo * PI / 180;

    printf("\n\nO ângulo convertido em radianos é: %.2f rad", conversao);


    return (0);

}
