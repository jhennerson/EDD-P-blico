#include <stdio.h>
#include <locale.h>

/*3. Efetue a leitura de um n�mero real e imprima o resultado do quadrado desse n�mero.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero = 0;

    printf("Insira um n�mero real: ");
    scanf("%f", &numero);
    numero = numero * numero;
    printf("\n\nO quadrado do n�mero inserido �: %f", numero);

    return(0);
}
