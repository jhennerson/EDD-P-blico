#include <stdio.h>
#include <locale.h>

/*15. Receba o sal�rio de um funcion�rio, calcule e imprima o valor do novo sal�rio, sabendo que ele recebeu um aumento de 25%.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario = 0;

    printf("***C�LCULO DE PROMO��O***\n");

    printf("\nInsira o valor do sal�rio do funcion�rio a ser promovido: ");
    scanf("%f", &salario);
    printf("\nO valor do novo sal�rio deste funcion�rio �: %.2f R$", salario + (salario * 0.25));

    return(0);
}
