#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*48. Ler um valor de comprimento em jardas e apresentá-lo convertido em metros.
A fórmula de conversão é: M=0,91*J , sendo J o comprimento em jardas e M o comprimento em metros.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, conversao;

    printf("*****CONVERSÃO JARDAS PARA METROS*****\n\n");
    printf("Insira o valor do comprimento em jardas: ");
    scanf("%f", &comprimento);

    conversao = comprimento * 0.91;

    printf("\n\nO comprimento convertido em metros é: %.2f m", conversao);


    return (0);

}
