#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*36. Ler uma velocidade em km/h (quil�metros por hora) e apresent�-la convertida em m/s (metros por segundo).
A f�rmula de convers�o �: M=k/3,6, sendo k a velocidade em km/h e M em m/s.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float velocidade, conversao;

    printf("*****CONVERS�O km/h PARA m/s*****\n\n");
    printf("Insira o valor da velocidade em km/h: ");
    scanf("%f", &velocidade);

    conversao = velocidade / 3.6;

    printf("\n\nA velocidade convertida em metros por segundo �: %.2f m/s", conversao);


    return (0);

}
