#include <stdio.h>
#include <locale.h>

/*19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber,
sabendo-se que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso,
paga 7% de imposto sobre o sal�rio-base.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salarioBase, pagamento = 0;

    printf("***C�LCULO DE SAL�RIO***\n");

    printf("\nInsira o valor do sal�rio base: ");
    scanf("%f", &salarioBase);

    pagamento = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);

    printf("\nO valor total a pagar ao funcion�rio �: %.2f R$", pagamento);

    return(0);
}
