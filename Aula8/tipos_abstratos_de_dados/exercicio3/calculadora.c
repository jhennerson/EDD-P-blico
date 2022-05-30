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
    printf("\nSelecione uma op��o:\n");
    printf("\nSoma = +");
    printf("\tSubtra��o = -");
    printf("\tMultiplica��o = *");
    printf("\tDivis�o = /\n");
    while(1) {
        scanf(" %c", &op);

        switch(op) {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            printf("\nOP��O INV�LIDA!\n");
            continue;
        }
    }
}

char recebeComando() {
    char comando;
    printf("\nSelecione uma op��o:\n");
    printf("\nContinuar = c");
    printf("\tNova opera��o = n");
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
            printf("\nOP��O INV�LIDA!\n");
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
    printf("OPERA��ES MATEM�TICAS\n");
}
