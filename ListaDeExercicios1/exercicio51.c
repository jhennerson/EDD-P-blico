#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*51. Ler um valor de �rea em acres e apresent�-lo convertido em metros quadrados M�.
A f�rmula de convers�o �: M=A*4048,58 , sendo M a �rea em metros quadrados e A a �rea em acres.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float area, conversao;

    printf("*****CONVERS�O ACRES PARA METROS QUADRADOS*****\n\n");
    printf("Insira o valor da �rea em acres: ");
    scanf("%f", &area);

    conversao = area * 4048.58;

    printf("\n\nA �rea convertida em metros quadrados �: %.2f m�", conversao);


    return (0);

}
