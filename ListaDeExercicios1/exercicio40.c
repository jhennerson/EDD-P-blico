#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.141592

/*40. Ler um �ngulo em graus e apresent�-lo convertido em radianos.
A f�rmula de convers�o �: R = G*PI/180 , sendo G o �ngulo em graus e R em radianos e PI = 3,141592.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float angulo, conversao;

    printf("*****CONVERS�O GRAUS PARA RADIANOS*****\n\n");
    printf("Insira o valor do �ngulo em graus: ");
    scanf("%f", &angulo);

    conversao = angulo * PI / 180;

    printf("\n\nO �ngulo convertido em radianos �: %.2f rad", conversao);


    return (0);

}
