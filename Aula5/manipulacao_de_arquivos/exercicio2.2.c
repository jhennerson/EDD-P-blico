#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
} FUNCIONARIO;


int main() {
    setlocale(LC_ALL, "");

    FILE *f = fopen("_databin.txt", "rb");

    if(f == NULL) {
        printf("Erro na leitura do arquivo!\n");
        system("pause");
        exit(1);
    }

    printf("Cadastro de funcionários:\n\n");

    FUNCIONARIO colaborador[5];

    fseek(f, 2*sizeof(FUNCIONARIO), SEEK_SET);
    fread(&colaborador, sizeof(FUNCIONARIO), 1, f);
    printf("ID: %d \nNome: %s \nIdade: %d \nSalário: %.2f \n\n", colaborador->ID, colaborador->nome, colaborador->idade, colaborador->salario);

    fclose(f);

    system("pause");
    return(0);
}
