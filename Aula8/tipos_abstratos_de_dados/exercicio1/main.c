//ALUNO: Jhennerson Barbosa da Silva MATRÍCULA: GU3020461 TURMA 1 ADS 2 SEM

#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

int main () {

    int salarioBruto, vantagens, salarioHora, numeroHoras, numeroFilho, valorPorFilho, taxaIR = 0;
    float deducoes = 0;

    printf("CALCULO DE VANTAGENS E DEDUCOES\n");

    printf("\nInsira o valor do salario/hora: R$ ");
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

    printf("\nDeducoes = RS %.2f", deducoes);
}
