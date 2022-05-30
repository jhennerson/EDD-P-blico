#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "calculadora.h"

float calcula(float numeroA, float numeroB, char op) {
    switch(op) {
        case '+':
            return(numeroA + numeroB);
            break;
        case '-':
            return(numeroA - numeroB);
            break;
        case '*':
            return(numeroA * numeroB);
            break;
        case '/':
            return(numeroA / numeroB);
            break;
        default:
            exit(0);
    }
}

char recebeOperador() {
    char op;
    printf("\nSelecione uma opção:\n");
    printf("\nSoma = +");
    printf("\tSubtração = -");
    printf("\tMultiplicação = *");
    printf("\tDivisão = /\n");
    while(1) {
        scanf(" %c", &op);

        switch(op) {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            printf("\nOPÇÃO INVÁLIDA!\n");
            continue;
        }
    }
}

char recebeComando() {
    char comando;
    printf("\nSelecione uma opção:\n");
    printf("\nContinuar = c");
    printf("\tNova operação = n");
    printf("\tResultado anterior = a");
    printf("\tSair = s\n");
    while(1) {
        scanf(" %c", &comando);

        switch(tolower(comando)) {
        case 'c':
        case 'a':
        case 'n':
        case 's':
            return comando;
        default:
            printf("\nOPÇÃO INVÁLIDA!\n");
            continue;
        }
    }
}

float recebeNumero() {
    float numero = 0;
    printf("\nInsira um valor: ");
    scanf("%f", &numero);
    return numero;
}

void cabecalho(void) {
    system("cls");
    printf("OPERAÇÕES MATEMÁTICAS\n");
}
