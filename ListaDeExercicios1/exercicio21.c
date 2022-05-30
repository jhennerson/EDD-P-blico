#include <stdio.h>
#include <locale.h>

/*21. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo a escada.
Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float degrau, somaDegrais, objetivo = 0;
    int qtdDegrais = 0;

    printf("***ESCADA***\n");

    printf("\nInsira o valor da altura de cada degrau da escada em metros: ");
    scanf("%f", &degrau);
    printf("\nInsira o valor da altura que deseja atingir em metros: ");
    scanf("%f", &objetivo);

    while (objetivo > somaDegrais) {
        somaDegrais = somaDegrais + degrau;
        qtdDegrais = qtdDegrais + 1;
    }

    printf("\nVoc� deve subir %d degrais para alcan�ar a altura de %.1f m", qtdDegrais, objetivo);

    return(0);
}
