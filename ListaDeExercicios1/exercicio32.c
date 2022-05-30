#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*32. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é: F = C * (9,0/5,0) + 32,0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float temperatura, conversao;

    printf("*****CONVERSÃO CELSIUS PARA FAHRENHEIT*****\n\n");
    printf("Insira o valor da temperatura em ºC: ");
    scanf("%f", &temperatura);

    conversao = (temperatura * (9.0/5.0)) + 32.0;

    printf("\n\nA temperatura convertida em Fahrenheit é: %.2f ºF", conversao);


    return (0);

}
