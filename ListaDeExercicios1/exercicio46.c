#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*46. Ler um valor de massa em quilogramas e apresent�-lo convertido em libras.
A f�rmula de convers�o �: L=K/0,45 , sendo K a massa em quilogramas e L a massa em libras.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float massa, conversao;

    printf("*****CONVERS�O QUILOGRAMAS PARA LIBRAS*****\n\n");
    printf("Insira o valor da massa em quilogramas: ");
    scanf("%f", &massa);

    conversao = massa / 0.45;

    printf("\n\nA massa convertida em libras �: %.2f lb", conversao);


    return (0);

}
