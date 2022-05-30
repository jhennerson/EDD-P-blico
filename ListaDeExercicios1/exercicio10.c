#include <stdio.h>
#include <locale.h>

/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float lado = 0;

    printf("***ÁREA DE UM QUADRADO***\n");

    printf("\nInsira o valor do lado do quadrado em metros: ");
    scanf("%f", &lado);
    printf("Área do quadrado = %.2f m", lado * lado);

    return(0);
}
