#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*42. Ler um valor de comprimento em polegadas e apresent�-lo convertido em cent�metros.
A f�rmula de convers�o �: C=P*2,54 , sendo C o comprimento em cent�metros e P o comprimento em polegadas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, conversao;

    printf("*****CONVERS�O POLEGADAS PARA CENT�METROS*****\n\n");
    printf("Insira o valor da comprimento em polegadas: ");
    scanf("%f", &comprimento);

    conversao = comprimento * 2.54;

    printf("\n\nO comprimento convertido em cent�metros �: %.2f cm", conversao);


    return (0);

}
