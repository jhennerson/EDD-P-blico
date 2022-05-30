#include <stdio.h>
#include <locale.h>

/*11. Leia o valor do raio de um círculo e calcule a área do círculo correspondente.
 *Imprima o resultado dessa operação. A área do círculo é pi*raio^2, considere pi=3,141592.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio = 0;
    float pi = 3.141592;

    printf("***RAIO DO CÍRCULO***\n");

    printf("\nInsira o valor do raio do circulo em metros: ");
    scanf("%f", &raio);
    printf("Área do círculo = %.2f m", pi * (raio * raio));

    return(0);
}
