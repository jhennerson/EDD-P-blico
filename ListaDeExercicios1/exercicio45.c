#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*45. Ler um valor de volume em litros e apresent�-lo convertido em metros c�bicos m�.
A f�rmula de convers�o �: M=L/1000 , sendo L o volume em litros e M o volume em metros c�bicos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float volume, conversao;

    printf("*****CONVERS�O LITROS PARA METROS C�BICOS*****\n\n");
    printf("Insira o valor da volume em litros: ");
    scanf("%f", &volume);

    conversao = volume / 1000;

    printf("\n\nO volume convertido em metros c�bicos �: %.2f m�", conversao);


    return (0);

}
