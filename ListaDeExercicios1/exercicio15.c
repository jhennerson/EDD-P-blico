#include <stdio.h>
#include <locale.h>

/*15. Receba o salário de um funcionário, calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario = 0;

    printf("***CÁLCULO DE PROMOÇÃO***\n");

    printf("\nInsira o valor do salário do funcionário a ser promovido: ");
    scanf("%f", &salario);
    printf("\nO valor do novo salário deste funcionário é: %.2f R$", salario + (salario * 0.25));

    return(0);
}
