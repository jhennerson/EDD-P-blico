#include <stdio.h>
#include <locale.h>

/*8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("***NÚMEROS***\n");

    printf("\nInsira um número: ");
    scanf("%d", &numero);
    printf("Número inserido = %d \nNúmero antecessor = %d \nNúmero sucessor = %d", numero, numero - 1, numero + 1);

    return(0);
}
