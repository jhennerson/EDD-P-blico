#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*36. Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la convertida em m/s (metros por segundo).
A fórmula de conversão é: M=k/3,6, sendo k a velocidade em km/h e M em m/s.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float velocidade, conversao;

    printf("*****CONVERSÃO km/h PARA m/s*****\n\n");
    printf("Insira o valor da velocidade em km/h: ");
    scanf("%f", &velocidade);

    conversao = velocidade / 3.6;

    printf("\n\nA velocidade convertida em metros por segundo é: %.2f m/s", conversao);


    return (0);

}
