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

    FILE *f = fopen("_databin.txt", "wb");

    if(f == NULL) {
        printf("Erro na leitura do arquivo!\n");
        system("pause");
        exit(1);
    }



    FUNCIONARIO colaborador[5];

    for(int i = 0; i < 5; i++){

        printf("Cadastro de funcion�rios:\n\n");

        printf("Digite o ID do funcion�rio %d: ", i+1);
        scanf("%d",&colaborador[i].ID);

        printf("Digite o nome do funcion�rio %d: ", i+1);
        scanf("%s",&colaborador[i].nome);

        printf("Digite a idade do funcion�rio %d: ", i+1);
        scanf("%d",&colaborador[i].idade);

        printf("Digite o sal�rio do funcion�rio %d: ", i+1);
        scanf("%f",&colaborador[i].salario);

        system("cls");
    }

    fwrite(&colaborador, sizeof(FUNCIONARIO), 5, f);

    fclose(f);

    printf("Cadastro realizado com sucesso!\n");

    system("pause");
    return(0);
}
