#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*44. Ler um valor de volume em metros c�bicos m� e apresent�-lo convertido em litros.
A f�rmula de convers�o �: L=1000*M, sendo L o volume em litros e M o volume em metros c�bicos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float volume, conversao;

    printf("*****CONVERS�O METROS C�BICOS PARA LITROS*****\n\n");
    printf("Insira o valor da volume em metros c�bicos: ");
    scanf("%f", &volume);

    conversao = volume * 1000;

    printf("\n\nO volume convertido em litros �: %.2f litros", conversao);


    return (0);

}
