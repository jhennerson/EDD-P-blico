/*2 – Utilizando o conceito de Tipos Abstratos de Dados, crie uma estrutura
chamada Retângulo, que deverá ficar encapsulada em um módulo aparte do módulo
main(), sendo somente acessível através de seu endereço em memória. Essa
estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito
do retângulo (2 estruturas Ponto). Cada coordenada é definida por uma estrutura
Ponto, a qual conterá as posições X e Y. Faça um programa leia as coordenadas
do retângulo informadas pelo usuário, e armazene-as em uma estrutura Retângulo.
Em exiba a área, o comprimento da diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

void main(void)
{
    float xs, ys, xi, yi;
    Retangulo *r;

    printf("******Dados do Retangulo******");

    printf("\nInsira o valor da coordenada x do ponto superior: ");
    scanf("%f", &xs);
    printf("\nInsira o valor da coordenada y do ponto superior: ");
    scanf("%f", &ys);
    printf("\nInsira o valor da coordenada x do ponto inferior: ");
    scanf("%f", &xi);
    printf("\nInsira o valor da coordenada y do ponto inferior: ");
    scanf("%f", &yi);

    r = cria_retangulo(xi, yi, xs, ys);

    float areaRetangulo = area(r);
    float diagonalRetangulo = diagonal(r);
    float perimetroRetangulo = perimetro(r);

    printf("\n\nArea: %.2f", areaRetangulo);
    printf("\nDiagonal: %.2f", diagonalRetangulo);
    printf("\nPerimetro: %.2f", perimetroRetangulo);

    libera_retangulo(r);
}
