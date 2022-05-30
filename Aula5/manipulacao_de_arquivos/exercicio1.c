#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "");

    char c;
    char texto[128];
    char arquivo1[8] = "arq1.txt";
    char arquivo2[8] = "arq2.txt";

    FILE *f1, *f2;

    f1 = fopen("arq1.txt", "w");

    printf("Digite a frase que será gravada no arquivo de texto:\n");
    fgets(texto, 128, stdin);

    for(int i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f1);
    }

    fclose(f1);

    f1 = fopen("arq1.txt","r");
    f2 = fopen("arq2.txt", "w");

    c = fgetc(f1);
    while(c != EOF) {
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }

    fclose(f1);
    fclose(f2);

    system("cls");

    f1 = fopen("arq1.txt","r");
    f2 = fopen("arq2.txt","r");

    printf("Arquivo 1:\n\n");
    c = fgetc(f1);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(f1);
    }

    printf("\n");

    printf("Arquivo 2:\n\n");
    c = fgetc(f2);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(f2);
    }


    fclose(f1);
    fclose(f2);
    return(0);
}
