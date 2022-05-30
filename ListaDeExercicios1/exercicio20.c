#include <stdio.h>
#include <locale.h>

/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- O total a pagar com desconto de 10%;
- O valor de cada parcela, no parcelamento de 3 x sem juros;
- A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
- A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorVenda, valorTotal, comissao = 0;
    int opcao = 0;

    printf("***CÁLCULO DE VENDAS***\n");
    printf("Escolha uma opção:\n");

    printf("1 - Pagamento à vista com desconto de 10%%\n");
    printf("2 - Pagamento parcelado em 3x sem juros\n");

    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("\nInsira o valor da venda: ");
        scanf("%f", &valorVenda);
        valorTotal = valorVenda - (valorVenda * 0.1);
        comissao = valorTotal * 0.05;
        printf("\nO valor total da venda com desconto é de: %.2f R$", valorTotal);
        printf("\nO valor da comissão sobre essa venda é de %.2f R$", comissao);
        break;
    case 2:
        printf("\nInsira o valor da venda: ");
        scanf("%f", &valorVenda);
        valorTotal = valorVenda;
        comissao = valorTotal * 0.05;
        printf("\nO valor das parcelas é de: %.2f R$", valorTotal / 3);
        printf("\nO valor da comissão sobre essa venda é de %.2f R$", comissao);
        break;
    default:
        printf("\nOpção inválida");
        return(0);
    }

    return(0);
}
