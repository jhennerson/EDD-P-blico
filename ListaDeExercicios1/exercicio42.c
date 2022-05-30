#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*42. Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros.
A fórmula de conversão é: C=P*2,54 , sendo C o comprimento em centímetros e P o comprimento em polegadas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, conversao;

    printf("*****CONVERSÃO POLEGADAS PARA CENTÍMETROS*****\n\n");
    printf("Insira o valor da comprimento em polegadas: ");
    scanf("%f", &comprimento);

    conversao = comprimento * 2.54;

    printf("\n\nO comprimento convertido em centímetros é: %.2f cm", conversao);


    return (0);

}
