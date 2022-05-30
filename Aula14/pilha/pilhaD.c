/*ALUNO: Jhennerson Barbosa da Silva
  MATRICULA: GU3020461*/

#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"

struct elemento {
    ALUNO dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Pilha cria_pilha() {
    Pilha *pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL) {
        *pi = NULL;
    }
    return pi;
}

void destroi_pilha(Pilha *pi) {
    if(pi != NULL) { //verifica se pilha existe
        Elem *no;
        while((*pi) != NULL) {
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int tamanho_pilha(Pilha *pi) {
    if(pi == NULL) {
        return 0;
    }
    int acum = 0;
    Elem *no = *pi;
    while(no != NULL) {
        acum++;
        no = no->prox;
    }
    return acum;
}

int pilha_cheia(Pilha *pi) {
    return 0;
}

int pilha_vazia(Pilha *pi) {
    if(pi == NULL) { //pilha vazia
        return 1;
    }
    if(*pi == NULL) { // topo aponta para NULL n�o temos elementos na pilha
        return 1;
    }
    return 0;
}

int insere_pilha(Pilha *pi, ALUNO al) {
    if(pi == NULL) {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

int remove_pilha(Pilha *pi) {
    if(pi == NULL) { //se pilha existe
        return 0;
    }
    if((*pi) == NULL) { //se pilha vazia
        return 0;
    }
    Elem *no = *pi; //no auxiliar recebe o topo da pilha
    *pi = no->prox; //topo da pilha recebe pr�ximo elemento
    free(no);
    return 1;
}


int consulta_pilha(Pilha *pi, ALUNO *al) {
    if(pi == NULL) {
        return 0;
    }
    if((*pi) == NULL) {
        return 0;
    }
    *al = (*pi)->dados;
    return 1;
}
