/*2 � Utilizando o conceito de Tipos Abstratos de Dados, crie uma estrutura
chamada Ret�ngulo, que dever� ficar encapsulada em um m�dulo aparte do m�dulo
main(), sendo somente acess�vel atrav�s de seu endere�o em mem�ria. Essa
estrutura dever� conter o ponto superior esquerdo e o ponto inferior direito
do ret�ngulo (2 estruturas Ponto). Cada coordenada � definida por uma estrutura
Ponto, a qual conter� as posi��es X e Y. Fa�a um programa leia as coordenadas
do ret�ngulo informadas pelo usu�rio, e armazene-as em uma estrutura Ret�ngulo.
Em exiba a �rea, o comprimento da diagonal e o per�metro desse ret�ngulo.*/

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
