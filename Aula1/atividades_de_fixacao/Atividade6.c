/*Fa�a um programa que receba uma string do usu�rio (um pequeno texto), e conte
quantos espa�os em branco o texto possui e exiba o resultado.
  Em seguida, elimine estes espa�os em branco e imprima a string resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    char string[50];
    char stringResultante[50];
    int cont = 0;
    char caractere = ' ';

    gets(string);
    fflush(stdin);

    for(int i = 0; i < strlen(string); i++) {
        if(string[i] == caractere) {
            cont++;
        }
    }

    int j = 0;
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] == caractere) {
           continue;
        }
        stringResultante[j] = string[i];
        j++;
    }

    printf("\n\nO texto digitado cont�m %d espa�os em branco.", cont);
    printf("\n\n%s", stringResultante);
}
