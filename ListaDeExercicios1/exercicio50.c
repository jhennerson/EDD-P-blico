#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*50. Ler um valor de �rea em metros quadrados m� e apresent�-lo convertido em acres.
A f�rmula de convers�o �: A=M*0,000247, sendo M a �rea em metros quadrados e A a �rea em acres.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERS�O METROS QUADRADOS PARA ACRES*****\n\n");
    printf("Insira o valor da �rea em metros quadrados: ");
    scanf("%f", &area);

    conversao = area * 0.000247;

    printf("\n\nA �rea convertida em acres �: %.2f ac", conversao);


    return (0);

}
