#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*42. Ler um valor de comprimento em cent�metros e apresent�-lo convertido em polegadas.
A f�rmula de convers�o �: C=P/2,54 , sendo C o comprimento em cent�metros e P o comprimento em polegadas.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, conversao;

    printf("*****CONVERS�O CENT�METROS PARA POLEGADAS*****\n\n");
    printf("Insira o valor da comprimento em cent�metros: ");
    scanf("%f", &comprimento);

    conversao = comprimento / 2.54;

    printf("\n\nO comprimento convertido em polegadas �: %.2f pol", conversao);


    return (0);

}
