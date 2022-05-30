#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main()
{
    int x, mat = 110, posicao = 1;
    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al.matricula = 120;
    al.n1 = 4;
    al.n2 = 2.9;
    al.n3 = 8.4;

    al.matricula = 110;
    al.n1 = 1.3;
    al.n2 = 2.9;
    al.n3 = 3.4;

    Lista *li; //ponteiro para ponteiro que está no arquivo listaLigada.h
    li = criaLista();
    x = tamLista(li);


    printf("O tamanho da lista e: %d", x);

    if(listaCheia(li)) {
        printf("\nLista esta cheia!");
    } else {
        printf("\nLista esta vazia.");
    }

    if(listaVazia(li)) {
        printf("\nLista esta vazia!");
    } else {
        printf("\nLista nao esta vazia.");
    }

    x = insere_inicio_lista(li, al);
    if(x) {
        printf("\nInserido no inicio com sucesso!");
    } else {
        printf("\nNao foi possivel inserir no inicio.");
    }

    x = insere_final_lista(li, al2);
    if(x) {
        printf("\nInserido no final com sucesso!");
    } else {
        printf("\nNao foi possivel inserir no final.");
    }

    x = insere_lista_ordenada(li, al3);
    if(x) {
        printf("\nInserido ordenadamente com sucesso!");
    } else {
        printf("\nNao foi possivel inserir ordenadamente.");
    }

    apagaLista(li);
}

