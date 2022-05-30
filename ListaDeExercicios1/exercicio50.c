#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*50. Ler um valor de área em metros quadrados m² e apresentá-lo convertido em acres.
A fórmula de conversão é: A=M*0,000247, sendo M a área em metros quadrados e A a área em acres.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERSÃO METROS QUADRADOS PARA ACRES*****\n\n");
    printf("Insira o valor da área em metros quadrados: ");
    scanf("%f", &area);

    conversao = area * 0.000247;

    printf("\n\nA área convertida em acres é: %.2f ac", conversao);


    return (0);

}
