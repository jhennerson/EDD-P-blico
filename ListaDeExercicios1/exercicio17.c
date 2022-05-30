#include <stdio.h>
#include <locale.h>

/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número
de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que
são descontados 8% para imposto de renda.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float diaria = 30.00;
    float imposto = 8;
    int dias = 0;

    printf("***CÁLCULO DE CONTRATO DO ENCANADOR***\n");

    printf("\n\nValor da diária: %.2f R$", diaria);

    printf("\nInsira a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);
    printf("\nO valor total a pagar ao encanador é: %.2f R$", dias * diaria - (dias * diaria * imposto / 100));

    return(0);
}
