#include <stdio.h>
#include <locale.h>

/*19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber,
sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
paga 7% de imposto sobre o salário-base.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salarioBase, pagamento = 0;

    printf("***CÁLCULO DE SALÁRIO***\n");

    printf("\nInsira o valor do salário base: ");
    scanf("%f", &salarioBase);

    pagamento = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);

    printf("\nO valor total a pagar ao funcionário é: %.2f R$", pagamento);

    return(0);
}
