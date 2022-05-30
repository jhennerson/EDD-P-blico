/*Escreva um programa em que o usu�rio insira um n�mero
qualquer. Se o n�mero digitado for um da tabela abaixo, o
programa deve retornar os caracteres indicados, sen�o, o
programa deve retornar o caractere 0 (zero). Utilize o comando
switch.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char numero;
    setlocale(LC_ALL,"Portuguese");

    printf("Insira um n�mero entre 1 e 4:\n");
    scanf(" %c", &numero);

    switch(numero) {
        case '1':
            printf("A\n");
            break;
        case '2':
            printf("B\n");
            break;
        case '3':
            printf("C\n");
            break;
        case '4':
            printf("D\n");
            break;
        default:
            printf("0\n");
            break;
    }
    return 0;
}
