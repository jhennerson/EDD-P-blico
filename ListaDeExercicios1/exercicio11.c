#include <stdio.h>
#include <locale.h>

/*11. Leia o valor do raio de um c�rculo e calcule a �rea do c�rculo correspondente.
 *Imprima o resultado dessa opera��o. A �rea do c�rculo � pi*raio^2, considere pi=3,141592.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio = 0;
    float pi = 3.141592;

    printf("***RAIO DO C�RCULO***\n");

    printf("\nInsira o valor do raio do circulo em metros: ");
    scanf("%f", &raio);
    printf("�rea do c�rculo = %.2f m", pi * (raio * raio));

    return(0);
}
