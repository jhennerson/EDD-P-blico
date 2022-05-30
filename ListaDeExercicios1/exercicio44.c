#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*44. Ler um valor de volume em metros cúbicos m³ e apresentá-lo convertido em litros.
A fórmula de conversão é: L=1000*M, sendo L o volume em litros e M o volume em metros cúbicos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float volume, conversao;

    printf("*****CONVERSÃO METROS CÚBICOS PARA LITROS*****\n\n");
    printf("Insira o valor da volume em metros cúbicos: ");
    scanf("%f", &volume);

    conversao = volume * 1000;

    printf("\n\nO volume convertido em litros é: %.2f litros", conversao);


    return (0);

}
