#include <stdio.h>
#include <locale.h>

/*3. Efetue a leitura de um número real e imprima o resultado do quadrado desse número.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero = 0;

    printf("Insira um número real: ");
    scanf("%f", &numero);
    numero = numero * numero;
    printf("\n\nO quadrado do número inserido é: %f", numero);

    return(0);
}
