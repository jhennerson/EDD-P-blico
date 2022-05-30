/*ALUNO: Jhennerson Barbosa da Silva
  MATRICULA: GU3020461*/

#include <stdio.h>
#include <stdlib.h>
#include "filaD.h"

int main()
{
    int x;
    Fila *fi;
    ALUNO al;
    al.matricula = 1;
    al.n1 = 10;
    al.n2 = 9;
    al.n3 = 8;

    fi = cria_fila();

    x = tamanho_fila(fi);
    printf("\nO tamanho da fila e: %d", x);

    x = fila_cheia(fi);
    if(x) {
        printf("\nAfila nao esta cheia!");
    } else {
        printf("\nA fila nao esta cheia!");
    }

    x = fila_vazia(fi);
    if(x) {
        printf("\nA fila esta vazia!");
    } else {
        printf("\nAfila nao esta vazia.");
    }

    x = insere_fila(fi, al);
    if(x) {
        printf("\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = consulta_fila(fi, &al);
    if(x) {
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1:   %.2f", al.n1);
        printf("\nNota 2:   %.2f", al.n2);
        printf("\nNota 3:   %.2f", al.n3);
    } else {
        printf("\nErro, consulta nao realizada.");
    }

    x = remove_fila(fi);
    if(x) {
        printf("\nElemento removido com sucesso!");
    } else {
        printf("\nErro, elemento nao removido.");
    }

    destroi_fila(fi);
}


