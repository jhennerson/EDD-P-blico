#include <stdio.h>
#include <locale.h>

/*7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float real, cotacao, resultado = 0;

    printf("CONVERSÃO REAL/DOLAR\n");

    printf("\nInsira o valor em reais a ser calculado: R$ ");
    scanf("%f", &real);
    printf("\nInsira o valor da cotação do dólar: $  ");
    scanf("%f", &cotacao);
    resultado = real / cotacao;
    printf("\nResultado em dólares: $ %.2f", resultado);

    return(0);
}
