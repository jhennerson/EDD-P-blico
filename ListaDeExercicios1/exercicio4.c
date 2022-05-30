#include <stdio.h>
#include <locale.h>

/*4. Leia um número real e imprima a quinta parte deste número.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero = 0;
    printf("Insira um número real: ");
    scanf("%f", &numero);
    numero = numero / 5;
    printf("\n\nA quinta parte deste número é: %f", numero);

    return(0);
}
