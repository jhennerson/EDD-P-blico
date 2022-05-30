#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //inclui os prot�tipos

//defini��o de tipos de dados
struct ponto {
    float x;
    float y;
};

//Aloca e retorna um ponto com cooordenadas "x" e "y"
Ponto *pto_cria(float x, float y) {
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    if(p!=NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

//libera a mem�ria alocada para um ponto
void pto_libera(Ponto *p) {
    free(p);
}

//Recupera, por refer�ncia, o valor de um ponto
void pto_acessa(Ponto*p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}

//Atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto *p, float x, float y) {
    p->x = x;
    p->y = y;
}

//Calcula a dist�ncia entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
