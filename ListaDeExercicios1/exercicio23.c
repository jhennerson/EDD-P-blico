#include <stdio.h>
#include <stdlib.h>


/*23. Fa�a um programa para ler um n�mero inteiro, positivo de tr�s d�gitos, e gerar outro n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
N�meroLido = 123
N�meroGerado = 321.*/

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
