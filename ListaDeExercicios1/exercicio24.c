#include <stdio.h>
#include <stdlib.h>

/*24. Leia um número inteiro de 4 dígitos e imprima 1 dígito por linha.*/

int main() {

    int numero, resto;

    printf("Insira um numero de 4 digitos para ser separado: ");

    scanf("%d", &numero);
    if(numero >= 1000 && numero <= 9999) {

        resto = numero % 1000;
        numero = numero / 1000;
        printf("\n%d", numero);
        numero = resto;

        resto = numero % 100;
        numero = numero / 100;
        printf("\n%d", numero);
        numero = resto;

        resto = numero % 10;
        numero = numero / 10;
        printf("\n%d", numero);
        numero = resto;

        printf("\n%d", numero);
    }
    else {
        printf("Apenas numeros de 4 digitos sao permitidos");
    }
    return(0);
}
