#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*53. Ler um valor de �rea em hectares e apresent�-lo convertido em metros quadrados m�.
A f�rmula de convers�o �: M=H*10000 , sendo M a�rea em metros quadrados e H a �rea em hectares.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERS�O HECTARES PARA METROS QUADRADOS*****\n\n");
    printf("Insira o valor da �rea em hectares: ");
    scanf("%f", &area);

    conversao = area * 10000;

    printf("\n\nA �rea convertida em metros quadrados �: %.2f m�", conversao);


    return (0);

}
