#include <stdio.h>
#include <locale.h>

/*8. Leia um n�mero inteiro e imprima o seu antecessor e o seu sucessor.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("***N�MEROS***\n");

    printf("\nInsira um n�mero: ");
    scanf("%d", &numero);
    printf("N�mero inserido = %d \nN�mero antecessor = %d \nN�mero sucessor = %d", numero, numero - 1, numero + 1);

    return(0);
}
