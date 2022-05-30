#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

struct elemento {
    ALUNO dados;
    struct elemento *prox;
};

typedef struct elemento ELEM;

Lista *criaLista() {
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL) {
        *li = NULL;
    }
    return li;
}

void apagaLista(Lista *li) {
    if(li != NULL) {
        ELEM *no;
        while((*li) != NULL) {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamLista(Lista *li) {
    if(li == NULL) {
        return 0;
    }
    int acum = 0;
    ELEM *no = *li;
    while(no != NULL) {
        acum++;
        no = no->prox;
    }
    return acum;
}

int listaCheia(Lista *li) {
    return 0;
}

int listaVazia(Lista *li) {
    if(li == NULL) {
        return 1;
    }
    if(*li == NULL) {
        return 1;
    }
    return 0;
}

int insere_inicio_lista(Lista *li, ALUNO al){
    if(li == NULL) {
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_final_lista(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL) { //lista vazia insere no inicio
        *li = no;
    } else {
        ELEM *aux = *li;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

int insere_lista_ordenada(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    if(listaVazia(li)) { //insere no inicio
        no->prox = (*li);
        *li = no;
        return 1;
    } else {
        ELEM *ant, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula) {
            ant = atual; //posiciona entre os nós
            atual = atual->prox;
        }
        if(atual == *li) { //insere se estiver na primeira posção
            no->prox = (*li);
            *li = no;
        } else { //insere em qualquer outra posição
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}
