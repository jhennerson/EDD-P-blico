#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*53. Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados m².
A fórmula de conversão é: M=H*10000 , sendo M aárea em metros quadrados e H a área em hectares.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERSÃO HECTARES PARA METROS QUADRADOS*****\n\n");
    printf("Insira o valor da área em hectares: ");
    scanf("%f", &area);

    conversao = area * 10000;

    printf("\n\nA área convertida em metros quadrados é: %.2f m²", conversao);


    return (0);

}
