#include <stdio.h>
#include <locale.h>

/*5. Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

void main() {
    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2, valor3, soma = 0;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("\nInsira o segundo valor: ");
    scanf("%d", &valor2);
    printf("\nInsira o terceiro valor: ");
    scanf("%d", &valor3);

    valor1 = valor1 * valor1;
    valor2 = valor2 * valor2;
    valor3 = valor3 * valor3;

    soma = valor1 + valor2 + valor3;

    printf("\nA soma dos quadrados dos valores é: %d", soma);

    return(0);
}
