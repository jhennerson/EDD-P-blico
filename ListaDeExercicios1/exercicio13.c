#include <stdio.h>
#include <locale.h>

/*13. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.
O volume de um cilindro circular � calculado por meio da seguinte f�rmula: V = pi*r2*altura, onde pi=3,141592 .*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int raio, altura = 0;
    float volume = 0;
    float pi = 3.141592;

    printf("***C�LCULO DE VOLUME CILINDRICO***\n");

    printf("\nInsira o valor do raio: ");
    scanf("%d", &raio);
    printf("\nInsira o valor da altura: ");
    scanf("%d", &altura);
    volume = pi * (raio * raio) * altura;
    printf("O volume do cilindro �: %.1f", volume);

    return(0);
}
