#include <stdio.h>
#include <locale.h>

/*7. Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente em d�lares.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float real, cotacao, resultado = 0;

    printf("CONVERS�O REAL/DOLAR\n");

    printf("\nInsira o valor em reais a ser calculado: R$ ");
    scanf("%f", &real);
    printf("\nInsira o valor da cota��o do d�lar: $  ");
    scanf("%f", &cotacao);
    resultado = real / cotacao;
    printf("\nResultado em d�lares: $ %.2f", resultado);

    return(0);
}
