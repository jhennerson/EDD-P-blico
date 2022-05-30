/* Reescreva o programa anterior utilizando if-else-if.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char numero;
    setlocale(LC_ALL,"Portuguese");

    printf("Insira um número entre 1 e 4:\n");
    scanf(" %c", &numero);

    if(numero == '1') {
        printf("A\n");
    }else if(numero == '2') {
        printf("B\n");
    }else if(numero == '3'){
        printf("C\n");
    }else if(numero == '4'){
        printf("D\n");
    }else {
        printf("0\n");
    }
    return 0;
}
