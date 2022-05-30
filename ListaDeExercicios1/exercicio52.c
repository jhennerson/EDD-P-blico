#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*52. Ler um valor de área em metros quadrados m² e apresentá-lo convertido em hectares.
A fórmula de conversão é: H=M*0,0001, sendo M a área em metros quadrados e H a área em hectares.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERSÃO METROS QUADRADOS PARA HECTARES*****\n\n");
    printf("Insira o valor da área em metros quadrados: ");
    scanf("%f", &area);

    conversao = area * 0.0001;

    printf("\n\nA área convertida em hectares é: %.2f ha", conversao);


    return (0);

}
