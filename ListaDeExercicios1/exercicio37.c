#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*37. Ler uma velocidade em m/s (metros por segundo) e apresentá-la convertida em km/h (quilômetros por hora).
A fórmula de conversão é: K=M*3,6 , sendo K a velocidade em km/h e M em m/s.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float velocidade, conversao;

    printf("*****CONVERSÃO m/s PARA km/h*****\n\n");
    printf("Insira o valor da velocidade em m/s: ");
    scanf("%f", &velocidade);

    conversao = velocidade * 3.6;

    printf("\n\nA velocidade convertida em quilômetros por hora é: %.2f km/h", conversao);


    return (0);

}
