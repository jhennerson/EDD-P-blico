#include <stdio.h>
#include <locale.h>

/*18. Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas trabalhadas no m�s,
e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o valor calculado.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorHora, pagamento = 0;
    int horas = 0;

    printf("***C�LCULO DE CONTRATO DE TRABALHO***\n");

    printf("\nInsira o valor da hora de trabalho: ");
    scanf("%f", &valorHora);

    printf("\nInsira a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = horas * valorHora + (horas * valorHora * 0.1);

    printf("\nO valor total a pagar ao funcion�rio �: %.2f R$", pagamento);

    return(0);
}
