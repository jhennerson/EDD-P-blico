#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*49. Ler um valor de comprimento em metros e apresent�-lo convertido em jardas.
A f�rmula de convers�o �: J=M/0,91 , sendo J o comprimento em jardas e M o comprimento em metros.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, conversao;

    printf("*****CONVERS�O METROS PARA JARDAS*****\n\n");
    printf("Insira o valor do comprimento em metros: ");
    scanf("%f", &comprimento);

    conversao = comprimento / 0.91;

    printf("\n\nO comprimento convertido em jardas �: %.2f yd", conversao);


    return (0);

}
