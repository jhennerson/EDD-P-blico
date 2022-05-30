#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

struct ponto {
    float x;
    float y;
};

struct retangulo {
    Ponto *pontoA;
    Ponto *pontoB;
};

Retangulo *cria_retangulo(float xA, float yA, float xB, float yB) {
    Retangulo *r = (Retangulo*) malloc(sizeof(Retangulo));
    if(r != NULL) {
        r->pontoA->x = xA;
        r->pontoA->y = yA;
        r->pontoB->x = xB;
        r->pontoB->y = yB;
    }
    return r;
}

void libera_retangulo(Retangulo *r) {
    free(r);
}

float area(Retangulo *r) {
    float l1 = r->pontoB->x - r->pontoA->x;
    float l2 = r->pontoB->y - r->pontoA->y;
    return l1 * l2;
}

float diagonal(Retangulo *r) {
    float dx = r->pontoB->x - r->pontoA->x;
    float dy = r->pontoB->y - r->pontoA->y;
    return sqrt(dx * dx + dy * dy);
}

float perimetro(Retangulo *r) {
    float l1 = r->pontoB->x - r->pontoA->x;
    float l2 = r->pontoB->y - r->pontoA->y;
    return 2*l1 + 2*l2;
}
