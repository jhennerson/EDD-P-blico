#include <stdio.h>
#include <locale.h>

/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o n�mero
de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga, sabendo-se que
s�o descontados 8% para imposto de renda.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float diaria = 30.00;
    float imposto = 8;
    int dias = 0;

    printf("***C�LCULO DE CONTRATO DO ENCANADOR***\n");

    printf("\n\nValor da di�ria: %.2f R$", diaria);

    printf("\nInsira a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);
    printf("\nO valor total a pagar ao encanador �: %.2f R$", dias * diaria - (dias * diaria * imposto / 100));

    return(0);
}
