#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*42. Ler um valor de comprimento em centímetros e apresentá-lo convertido em polegadas.
A fórmula de conversão é: C=P/2,54 , sendo C o comprimento em centímetros e P o comprimento em polegadas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, conversao;

    printf("*****CONVERSÃO CENTÍMETROS PARA POLEGADAS*****\n\n");
    printf("Insira o valor da comprimento em centímetros: ");
    scanf("%f", &comprimento);

    conversao = comprimento / 2.54;

    printf("\n\nO comprimento convertido em polegadas é: %.2f pol", conversao);


    return (0);

}
