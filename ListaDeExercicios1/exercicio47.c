#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*47. Ler um valor de massa em libras e apresentá-lo convertido em quilogramas.
A fórmula de conversão é: K=L*0,45 , sendo K a massa em quilogramas e L a massa em libras.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float massa, conversao;

    printf("*****CONVERSÃO LIBRAS PARA QUILOGRAMAS*****\n\n");
    printf("Insira o valor da massa em libras: ");
    scanf("%f", &massa);

    conversao = massa * 0.45;

    printf("\n\nA massa convertida em quilogramas é: %.2f kg", conversao);


    return (0);

}
