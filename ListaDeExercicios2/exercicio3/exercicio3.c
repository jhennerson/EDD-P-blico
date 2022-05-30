/*3 � Crie uma fun��o recursiva que receba um n�mero inteiro �n� e
  imprima todos os n�meros naturais entre 0 e �n�, em ordem crescente.*/

#include <stdio.h>

int naturais(int n);

int main(void) {
    int i;

    printf("*****Numeros naturais*****\n");
    printf("\nInsira um numero: ");
    scanf("%d", &i);
    if(i < 0) {
    printf("\nApenas numeros maiores que 0!");
        return 0;
    }

    naturais(i);
}

int naturais(int n) {
    if(n >= 0) {
        naturais(n - 1);
        printf("\n%d", n);
    }
    return 0;
}
