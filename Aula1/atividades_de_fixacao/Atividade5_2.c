/* Altere-o para que o usuário insira via teclado as duas strings e o caracter a ser
procurado nas buscas dentro das 2 strings informadas. Inclua também nessa busca
dentro das strings a possibilidade do usuário fornecer parte de uma palavra (como
exemplo, você pode pensar em uma busca de nome parcial);*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    char string1[20];
    char string2[20];
    char trecho[20];
    char letra;
    int x, cont1 = 0, cont2 = 0;

    printf("Digite a primeira palavra:\n");
    gets(string1);
    fflush(stdin);
    printf("Digite a segunda palavra:\n");
    gets(string2);
    fflush(stdin);

    printf("\nDigite a letra que deseja buscar:\n");
    scanf(" %c", &letra);
    fflush(stdin);
    printf("Digite a palavra ou sequência de caracteres que deseja buscar:\n");
    gets(trecho);
    fflush(stdin);

    for(x = 0; x < strlen(string1); x++){
        if(string1[x] == letra) {
            cont1++;
        }
    }
    for(x = 0; x < strlen(string1); x++){
        if(string2[x] == letra) {
            cont2++;
        }
    }

    printf("\n\nA letra \"%c\" aparece %d vez(es) na string 1", letra   , cont1);
    printf(" e %d vez(es) na string 2", cont2);

    if(strstr(string1, trecho)) {
        printf("\n\nA string \"%s\" está dentro da palavra \"%s\"", trecho, string1);
    }
    if(strstr(string2, trecho)) {
        printf("\nA string \"%s\" está dentro da palavra \"%s\"", trecho, string2);
    }
}
