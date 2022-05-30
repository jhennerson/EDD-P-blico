#include <stdio.h>
#include <stdlib.h>


/*23. Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321.*/

int main() {

    int numero, numeroInverso, numeroTemporario;

    printf("Insira um numero de 3 digitos para ser invertido: ");

    scanf("%d", &numero);
    if(numero >= 100 && numero <= 999) {
        numeroTemporario = numero;
        numeroInverso = 0;
        for(int i = 0; i < 3; i++){
            numeroInverso = (numeroInverso * 10) + (numeroTemporario % 10);
            numeroTemporario = numeroTemporario / 10;
        }
    }
    else {
        printf("Apenas numeros de 3 digitos sao permitidos");
    }

    printf("\nO numero inverso ao inserido e: %d", numeroInverso);
    return(0);
}
