#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculoVantagens(int numeroHoras,int salarioHoras,int numeroFilhos,int valorPorFilho, int *vantagens) {
    int salarioBruto = numeroHoras * salarioHoras;
    int salarioFamilia = numeroFilhos * valorPorFilho;
    *vantagens = salarioBruto + salarioFamilia;
    return(*vantagens);
}

float calculoDeducoes(int salarioBruto, int taxaIR, int *deducoes) {
    int inss = salarioBruto * 0.08;
    int iprf = salarioBruto * taxaIR;
    *deducoes = inss + iprf;
    return(*deducoes);
}

int main () {
    setlocale(LC_ALL, "Portuguese");

    int salarioBruto, vantagens, salarioHora, numeroHoras, numeroFilho, valorPorFilho, taxaIR = 0;
    float deducoes = 0;

    printf("CALCULO DE VANTAGENS E DECUÇÕES\n");

    printf("\nInsira o valor do salário/hora: R$ ");
    scanf("%d", &salarioHora);

    printf("\nInsira a quantidade de horas trabalhadas: ");
    scanf("%d", &numeroHoras);

    printf("\nInsira a quantidade de filhos: ");
    scanf("%d", &numeroFilho);

    printf("\nInsira o valor/filho: R$ ");
    scanf("%d", &valorPorFilho);

    printf("\nInsira o valor da taxa do Imposto de Renda: ");
    scanf("%d", &valorPorFilho);

    salarioBruto = numeroHoras * salarioHora;
    vantagens = calculoVantagens(salarioHora, numeroHoras, numeroFilho, valorPorFilho, &vantagens);
    deducoes = calculoDeducoes(salarioBruto, taxaIR, &deducoes);

    printf("\nRESULTADOS:");

    printf("\nVantagens = R$ %d", vantagens);

    printf("\nDeduções = RS %.2f", deducoes);
}
