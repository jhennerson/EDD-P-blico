#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*46. Ler um valor de massa em quilogramas e apresentá-lo convertido em libras.
A fórmula de conversão é: L=K/0,45 , sendo K a massa em quilogramas e L a massa em libras.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float massa, conversao;

    printf("*****CONVERSÃO QUILOGRAMAS PARA LIBRAS*****\n\n");
    printf("Insira o valor da massa em quilogramas: ");
    scanf("%f", &massa);

    conversao = massa / 0.45;

    printf("\n\nA massa convertida em libras é: %.2f lb", conversao);


    return (0);

}
