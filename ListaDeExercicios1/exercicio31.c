#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*31. Faça um programa para ler as dimensões de um terreno
(comprimento c e largura l), bem como o preço do metro do arame p,
então fornecer como saída o custo para cercar este mesmo terreno.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float l, c, p, total;

    printf("*****CÁLCULO DE CUSTO PARA CERCA*****\n\n");
    printf("Insira o valor do metro do arame em reais: ");
    scanf("%f", &p);

    printf("\nInsira o valor da largura do terreno em metros: ");
    scanf("%f", &l);

    printf("\nInsira o valor do comprimento do terreno: ");
    scanf("%f", &c);

    total = p * (c + c + l + l);

    printf("\n\nO preço total para cercar este terreno será: %.2f R$", total);

    return (0);

}
