#include <stdio.h>
#include <locale.h>

/*9. Leia um n�mero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("***N�MEROS***\n");

    printf("\nInsira um n�mero: ");
    scanf("%d", &numero);
    printf("N�mero inserido = %d \nSoma do sucessor de seu triplo com o antecessor de seu dobro = %d", numero, ((numero * 3)+1) + ((numero * 2)-1));

    return(0);
}
