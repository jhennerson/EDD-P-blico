#include <stdio.h>
#include <locale.h>

/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua �rea.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float lado = 0;

    printf("***�REA DE UM QUADRADO***\n");

    printf("\nInsira o valor do lado do quadrado em metros: ");
    scanf("%f", &lado);
    printf("�rea do quadrado = %.2f m", lado * lado);

    return(0);
}
