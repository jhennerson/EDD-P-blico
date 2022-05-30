#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*34. Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius.
A fórmula de conversão é: C = K-273,15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float temperatura, conversao;

    printf("*****CONVERSÃO KELVIN PARA CELSIUS*****\n\n");
    printf("Insira o valor da temperatura em K: ");
    scanf("%f", &temperatura);

    conversao = temperatura - 273.15;

    printf("\n\nA temperatura convertida em Celsius é: %.2f ºC", conversao);


    return (0);

}
