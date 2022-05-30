#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*35. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin.
A fórmula de conversão é:K=C+273,15, sendo C a temperatura em Celsius e K atemperatura em Kelvin.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float temperatura, conversao;

    printf("*****CONVERSÃO CELSIUS PARA KELVIN*****\n\n");
    printf("Insira o valor da temperatura em ºC: ");
    scanf("%f", &temperatura);

    conversao = temperatura + 273.15;

    printf("\n\nA temperatura convertida em Kelvin é: %.2f K", conversao);


    return (0);

}
