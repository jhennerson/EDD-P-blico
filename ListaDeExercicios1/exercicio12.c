#include <stdio.h>
#include <locale.h>
#include <math.h>

/*12. Sejam a e b os catetos de um tri�ngulo, onde a hipotenusa � obtida pela
equa��o: hipotenusa^2= a^2+b^2. Fa�a um programa que receba os valores de a e b e encontre
o valor da hipotenusa atrav�s da equa��o. Imprima no final o resultado dessa opera��o.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b = 0;
    float h = 0;

    printf("***C�LCULO DE HIPOTENUSA***\n");

    printf("\nInsira o valor do lado a: ");
    scanf("%d", &a);
    printf("\nInsira o valor do lado b: ");
    scanf("%d", &b);
    h = sqrt((a*a)+(b*b));
    printf("A hipotenusa deste tri�ngulo �: %.1f", h);

    return(0);
}
