#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*31. Fa�a um programa para ler as dimens�es de um terreno
(comprimento c e largura l), bem como o pre�o do metro do arame p,
ent�o fornecer como sa�da o custo para cercar este mesmo terreno.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float l, c, p, total;

    printf("*****C�LCULO DE CUSTO PARA CERCA*****\n\n");
    printf("Insira o valor do metro do arame em reais: ");
    scanf("%f", &p);

    printf("\nInsira o valor da largura do terreno em metros: ");
    scanf("%f", &l);

    printf("\nInsira o valor do comprimento do terreno: ");
    scanf("%f", &c);

    total = p * (c + c + l + l);

    printf("\n\nO pre�o total para cercar este terreno ser�: %.2f R$", total);

    return (0);

}
