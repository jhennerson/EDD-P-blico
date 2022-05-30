/*4 – Crie uma função recursiva que receba por parâmetro
  dois valores inteiros x e y, calcule e retorne o resultado
  de xy para o programa principal*/

#include <stdio.h>
#include <locale.h>

double exp(int x, int y);

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    double r;

    printf("*****Potenciação recursiva*****\n");
    printf("\nInsira o valor da base: ");
    scanf("%d", &x);
    printf("\nInsira o valor do expoente: ");
    scanf("%d", &y);

    r = exp(x, y);

    printf("\nResultado: %.2f", r);
}

double exp(int x, int y) {
    if(y == 0){
        return 1;
    } else {
        return x * exp(x, y-1);
    }
}
