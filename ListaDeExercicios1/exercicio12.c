#include <stdio.h>
#include <locale.h>
#include <math.h>

/*12. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela
equação: hipotenusa^2= a^2+b^2. Faça um programa que receba os valores de a e b e encontre
o valor da hipotenusa através da equação. Imprima no final o resultado dessa operação.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b = 0;
    float h = 0;

    printf("***CÁLCULO DE HIPOTENUSA***\n");

    printf("\nInsira o valor do lado a: ");
    scanf("%d", &a);
    printf("\nInsira o valor do lado b: ");
    scanf("%d", &b);
    h = sqrt((a*a)+(b*b));
    printf("A hipotenusa deste triângulo é: %.1f", h);

    return(0);
}
