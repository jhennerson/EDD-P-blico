#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.141592

/*41. Ler um �ngulo em radianos e apresent�-lo convertido em graus.
A f�rmula de convers�o �: G = R * 180/PI , sendo G o �ngulo em graus e R em radianos e PI = 3,141592.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float angulo, conversao;

    printf("*****CONVERS�O RADIANOS PARA GRAUS*****\n\n");
    printf("Insira o valor do �ngulo em radianos: ");
    scanf("%f", &angulo);

    conversao = angulo * 180 / PI;

    printf("\n\nO �ngulo convertido em graus �: %.2f graus", conversao);


    return (0);

}
