#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*37. Ler uma velocidade em m/s (metros por segundo) e apresent�-la convertida em km/h (quil�metros por hora).
A f�rmula de convers�o �: K=M*3,6 , sendo K a velocidade em km/h e M em m/s.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float velocidade, conversao;

    printf("*****CONVERS�O m/s PARA km/h*****\n\n");
    printf("Insira o valor da velocidade em m/s: ");
    scanf("%f", &velocidade);

    conversao = velocidade * 3.6;

    printf("\n\nA velocidade convertida em quil�metros por hora �: %.2f km/h", conversao);


    return (0);

}
