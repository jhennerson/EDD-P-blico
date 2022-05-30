#include <stdio.h>
#include <stdlib.h>
#include "listaDDupla.h"

struct elemento {
    struct elemento *ant;
    struct elemento *prox;
    ALUNO dados;
};

typedef struct elemento Elem;

Lista *cria_lista() {
    Lista *li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL) {
        *li = NULL;
    }
    return li;
}

void destroi_lista(Lista *li) {
    if(li != NULL) {
        Elem *no;
        while((*li) != NULL) {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista *li) {
    if(li == NULL) { //se lista nula, n�o temos lista
        return 0;
    }
    int acum = 0;
    Elem *no = *li;     //n� auxiliar
    while(no != NULL) { //percorre a lista contando
        acum++;         //quantos n�s existem
        no = no->prox;  //desloca-se para o pr�ximo elemento
    }
    return acum;
}

int lista_cheia(Lista *li) {
    return 0;
}

int lista_vazia(Lista *li) {
    if(li == NULL) { //n�o existe lista
        return 1;
    }
    if(*li == NULL) { //lista est� vazia
        return 1;
    }
    return 0;
}

int insere_lista_inicio(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = *li;
    no->ant = NULL; //em lista n�o vazia, apontar para anterior
    if(*li != NULL) { //se a lista n�o era vaiza, o antigo 1�
        (*li)->ant = no; //n� em sua parte "ant" passa a apiontar para o n� inseriod no primeiro lugar
    }
    *li = no; //a cabe�a recebe o endere�o do novo n� inserido
    return 1;
}

int insere_lista_final(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = NULL; //como � o final, j� recebe NULL
    if((*li) == NULL) { //no caso de lista vazia, insere no inicio
        no->ant = NULL;
        *li = no;
    } else { //lista n�o estava vazia!
        Elem *aux = *li; //ponteiro auxiliar
        while(aux->prox != NULL) { //enquanto for diferente
            aux = aux->prox; //de nulo, anda na lista
        }
        aux->prox = no; //�ltimo elemento passa a apontar para o novo n� que passa a ser o novo �ltimo elemento
        no->ant = aux; //o novo n� inserido na �ltima posi��o passa a apoontar em "ant", para o antigo �ltimo elemento
    }
    return 1;
}

int insere_lista(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    if(lista_vazia(li)) { //insere no inicio
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
        return 1;
    } else {
        Elem *anterior, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula) {
            anterior = atual;
            atual = atual->prox; //anda na lista
        }
        if(atual == *li) { //insere no inicio
            no->ant = NULL; //j� era menor - se entrou nesse if significa que nunca andou na lista. A matricula testada na lista j� era maior que a que est� a inserir
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        } else { //este else trata da inser��o no meio ou no final
            no->prox = anterior->prox;
            no->ant = anterior;
            anterior->prox = no;
            if(atual != NULL) {
                atual->ant = no;
            }
        }
    }
    return 1;
}

int remove_lista_inicio(Lista *li) {
    if(li == NULL) {
        return 0;
    }
    Elem *no = *li;
    *li = no->prox;
    if(no->prox != NULL) { //se � vazia
        no->prox->ant = NULL;
    }
    free(no);
    return 1;
}

int remove_lista_final(Lista *li) {
    if(li == NULL) {
        return 0;
    }
    if((*li) == NULL) { //lista vazia
        return 0;
    }
    Elem *no = *li;
    while(no->prox != NULL) { //percorre a lista at� o no que aponta para NULL
        no = no->prox;
    }
    if(no->ant == NULL) { //remover o 1� e �nico n�
        *li = no->prox;
    } else {
        no->ant->prox = NULL;
    }
    free(no);
    return 1;
}

int remove_lista(Lista *li, int mat) {
    if(li == NULL) {
        return 0;
    }
    Elem *no = *li;
    while(no != NULL && no->dados.matricula != mat) {
        no = no->prox;
    }
    if(no == NULL) { //chegou ao final e n�o encontrou o elemento
        return 0;
    }
    if(no->ant == NULL) { //remove o primeiro
        *li = no->prox;
    } else {
        no->ant->prox = no->prox; //remove no meio
    }
    if(no->prox != NULL) {
        no->prox->ant = no->ant; //remove o �ltimo
    }
    free(no);
    return 1;
}

int consulta_lista_pos(Lista *li, int pos, ALUNO *al) {
    if(li == NULL || pos <= 0) {
        return 0;
    }
    Elem *no = *li;
    int i = 1;
    while(no != NULL && i < pos) {
        no = no->prox;
        i++;
    }
    if(no == NULL) { //se entrar no if significa que a posi��o passada �pe maior que a qtd de elementos da lista
        return 0;
    } else {
        *al = no->dados; //consulta OK!
    }
    return 1;
}
