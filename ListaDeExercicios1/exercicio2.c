#include <stdio.h>
#include <locale.h>

/*2. Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2, valor3 = 0;

    printf("Digite tr�s valores\n\n");

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &valor2);

    printf("\nDigite o terceiro valor: ");
    scanf("%d", &valor3);

    printf("\nA soma dos valors �: %d", valor1 + valor2 + valor3);

    return(0);
}
