#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define INICIOX 0
#define INICIOY 0

/*29. Escreva um programa que leia as coordenadas x e y de pontos no plano cartesiano e calcule sua distância da origem (0,0).*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float x, y, d;

    printf("*****CÁLCULO DE DISTÂNCIA NO PLANO CARTESIANO*****\n\n");
    printf("Insira o valor da cordenada x: ");
    scanf("%f", &x);

    printf("Insira o valor da cordenada y: ");
    scanf("%f", &y);

    d = sqrt(pow(INICIOX - x,2) + pow(INICIOY - y,2));

    printf("\nA distância entre o ponto (%.0f,%.0f) e a origem (%.0f,%.0f) é: %.2f", x, y, INICIOX, INICIOY, d);

    return (0);
}
