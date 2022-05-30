#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*45. Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos m³.
A fórmula de conversão é: M=L/1000 , sendo L o volume em litros e M o volume em metros cúbicos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float volume, conversao;

    printf("*****CONVERSÃO LITROS PARA METROS CÚBICOS*****\n\n");
    printf("Insira o valor da volume em litros: ");
    scanf("%f", &volume);

    conversao = volume / 1000;

    printf("\n\nO volume convertido em metros cúbicos é: %.2f m³", conversao);


    return (0);

}
