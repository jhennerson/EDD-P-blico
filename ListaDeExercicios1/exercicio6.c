#include <stdio.h>
#include <locale.h>

/*6. Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, nota4, soma, resultado = 0;

    printf("C�LCULO DE M�DIA");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\nDigite a quarta nota: ");
    scanf("%f", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    resultado = soma / 4;

    printf("A m�dia aritm�tica �: %.2f", resultado);

    return(0);
}
