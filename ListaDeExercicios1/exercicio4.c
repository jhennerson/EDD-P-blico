#include <stdio.h>
#include <locale.h>

/*4. Leia um n�mero real e imprima a quinta parte deste n�mero.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero = 0;
    printf("Insira um n�mero real: ");
    scanf("%f", &numero);
    numero = numero / 5;
    printf("\n\nA quinta parte deste n�mero �: %f", numero);

    return(0);
}
