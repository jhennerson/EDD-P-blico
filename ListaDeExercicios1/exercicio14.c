#include <stdio.h>
#include <locale.h>

/*14. Fa�a um programa que possa entrar com o valor de um produto e imprima o valor tendo em vista que o desconto foi de 12%*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorProduto = 0;

    printf("***C�LCULO DE DESCONTO***\n");

    printf("\nInsira o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("\nO valor do produto com 12%% de desconto �: %.2f R$", valorProduto - (valorProduto * 0.12));

    return(0);
}
