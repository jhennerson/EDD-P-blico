//ALUNO: Jhennerson Barbosa da Silva MATRÍCULA: GU3020461 TURMA: 1 ADS 2º SEM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "calculadora.h"

void main(void) {
    setlocale(LC_ALL, "");

    float *historico, numeroA, numeroB, resultado;
    char op, comando;
    int flag = 0;

    historico = (float*) malloc(2 * sizeof(float));
    if(historico == NULL) {
        printf("\nMEMÓRIA INSUFICIENTE PARA ALOCAÇÃO!\n");
        exit(1);
    }

    while(1) {

        if(flag == 0) {
            cabecalho();
            numeroA = recebeNumero();
        }
        op = recebeOperador();

        numeroB = recebeNumero();
        historico[0] = historico[1];
        resultado = calcula(numeroA, numeroB, op);
        historico[1] = resultado;
        printf("Resultado = %.2f", resultado);

        comando = recebeComando();
        switch(tolower(comando)) {
            case 'a':
                printf("Resultado anterior = %.2f\n\n", historico[0]);
                comando = recebeComando();
                break;
            case 'c':
                numeroA = resultado;
                flag = 1;
                continue;
            case 'n':
                flag = 0;
                continue;
            case 's':
                free(historico);
                printf("\nAté logo!\n");
                exit(1);
        }
    }
    free(historico);
}
