#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero, restoDiv;

    printf("*****CONVERSÃO DE TEMPO*****\n");
    printf("\nInsira o tempo em segundos: ");

    scanf("%d", &numero);
    restoDiv = numero % 3600;

    printf("\n%d Horas, %d Minutos e %d Segundos", (numero / 3600), (restoDiv / 60), (restoDiv % 60));

    return (0);

}

