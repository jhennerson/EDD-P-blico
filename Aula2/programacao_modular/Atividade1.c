#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int salarioBruto, salarioFamilia, vantagens, inss, iprf, deducoes = 0;

int calculoVantagens(int numeroHoras,int salarioHoras,int numeroFilhos,int valorPorFilho) {
    salarioBruto = numeroHoras * salarioHoras;
    salarioFamilia = numeroFilhos * valorPorFilho;
    vantagens = salarioBruto + salarioFamilia;
    return(vantagens);
}

int calculoDeducoes(int taxaIR) {
    inss = salarioBruto * 0.08;
    iprf = salarioBruto * taxaIR;
    deducoes = inss + iprf;
    return(deducoes);
}

int main () {
    setlocale(LC_ALL, "Portuguese");

    int numeroHoras, salarioHora, numeroFilho, valorPorFilho, taxaIR = 0;

    printf("CALCULO DE VANTAGENS E DECUÇÕES\n");

    printf("\nInsira o valor do salário/hora: R$ ");
    scanf("%d", &salarioHora);

    printf("\nInsira a quantidade de horas trabalhadas: ");
    scanf("%d", &numeroHoras);

    printf("\nInsira a quantidade de filhos: ");
    scanf("%d", &numeroFilho);

    printf("\nInsira o valor/filho: R$ ");
    scanf("%d", &valorPorFilho);

    printf("\nInsira o valor da taxa do Imposto de Renda: R$ ");
    scanf("%d", &valorPorFilho);

    calculoVantagens(salarioHora, numeroHoras, numeroFilho, valorPorFilho);
    calculoDeducoes(taxaIR);

    printf("\nRESULTADOS:");

    printf("\nVantagens = R$ %d", vantagens);

    printf("\nDeduções = RS %d", deducoes);
}
