#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*52. Ler um valor de �rea em metros quadrados m� e apresent�-lo convertido em hectares.
A f�rmula de convers�o �: H=M*0,0001, sendo M a �rea em metros quadrados e H a �rea em hectares.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERS�O METROS QUADRADOS PARA HECTARES*****\n\n");
    printf("Insira o valor da �rea em metros quadrados: ");
    scanf("%f", &area);

    conversao = area * 0.0001;

    printf("\n\nA �rea convertida em hectares �: %.2f ha", conversao);


    return (0);

}
