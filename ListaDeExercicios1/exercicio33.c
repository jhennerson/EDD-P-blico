#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*33. Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
A fórmula de conversão é: C = 5,0 * (F - 32,0 )/9,0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float temperatura, conversao;

    printf("*****CONVERSÃO FAHRENHEIT PARA CELSIUS*****\n\n");
    printf("Insira o valor da temperatura em ºF: ");
    scanf("%f", &temperatura);

    conversao = 5.0 * (temperatura - 32.0)/9.0;

    printf("\n\nA temperatura convertida em Celsius é: %.2f ºC", conversao);


    return (0);

}
