#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*51. Ler um valor de área em acres e apresentá-lo convertido em metros quadrados M².
A fórmula de conversão é: M=A*4048,58 , sendo M a área em metros quadrados e A a área em acres.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERSÃO ACRES PARA METROS QUADRADOS*****\n\n");
    printf("Insira o valor da área em acres: ");
    scanf("%f", &area);

    conversao = area * 4048.58;

    printf("\n\nA área convertida em metros quadrados é: %.2f m²", conversao);


    return (0);

}
