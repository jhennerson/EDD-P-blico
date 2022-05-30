#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"


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
