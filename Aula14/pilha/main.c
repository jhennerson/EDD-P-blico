/*ALUNO: Jhennerson Barbosa da Silva
  MATRICULA: GU3020461*/

#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"

int main()
{
    int x;
    Pilha *pi;
    ALUNO al;
    al.matricula = 1;
    al.n1 = 10.0;
    al.n2 = 9.5;
    al.n3 = 8.2;


    pi = cria_pilha();

    x = tamanho_pilha(pi);
    printf("\nO tamanho da pilha e: %d", x);

    x = pilha_cheia(pi);
    if(x) {
        printf("\nA pilha esta cheia!");
    } else {
        printf("\nA pilha nao esta cheia.");
    }

    x = pilha_vazia(pi);
    if(x) {
        printf("\nA pilha esta vazia!");
    } else {
        printf("\nA pilha nao esta vazia.");
    }

    x = insere_pilha(pi, al);
    if(x) {
        printf("\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = consulta_pilha(pi, &al);
    if(x) {
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1:   %.2f", al.n1);
        printf("\nNota 2:   %.2f", al.n2);
        printf("\nNota 3:   %.2f", al.n3);
    } else {
        printf("\nErro, consulta nao realizada.");
    }

    x = remove_pilha(pi);
    if(x) {
        printf("\nElemento removido com sucesso!");
    } else {
        printf("\nErro, elemento nao removido.");
    }

    destroi_pilha(pi);
}
