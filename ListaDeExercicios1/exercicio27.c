#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade, anoAtual, anoNasc;
    char aniversario;

    printf("*****DATA DE NASCIMENTO*****\n\n");

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("\n\nInsira o ano atual: ");
    scanf("%d", &anoAtual);

    printf("\nVocê já fez aniversário este ano?: (S/N)");
    scanf(" %c", &aniversario);

    switch (toupper(aniversario)){
        case 'S':
            anoNasc = anoAtual - idade;
        break;
        case 'N':
            anoNasc = anoAtual - idade - 1;
        break;
        default:
            printf("\nResposta inválida");
        return;
    }

    printf("\nVocê nasceu no ano de %d.", anoNasc);

    return (0);
}
