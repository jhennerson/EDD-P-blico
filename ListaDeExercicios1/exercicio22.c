#include <stdio.h>
#include <stdlib.h>


/*22. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII.*/

int main() {

    char letra;

    printf("***CONVERSAO DE LETRAS MAIUSCULAS EM MINUSCULAS***\n");

    printf("\nInsira uma letra para ser convertida: ");

    scanf("%c", &letra);
    if(letra < 65 || letra > 90) {
        printf("Somente letras maiusculas sao aceitas!");
    }
    else{
        letra = letra + 32;

        printf("Letra minuscula: %c", letra);
    }
    return(0);
}
