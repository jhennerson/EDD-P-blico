#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
};

void cabecalho();

int main () {
    struct funcionario colaborador[5];

    cabecalho();

    for (int i = 0; i < 5; i++) {
        printf("\nDigite o ID do colaborador %d:", i+1);
        scanf(" %d",&colaborador[i].ID);
        printf("\nDigite o nome do colaborador %d:", i+1);
        fflush(stdin);
        fgets(colaborador[i].nome, 29, stdin);
        printf("\nDigite a idade do colaborador %d:", i+1);
        scanf(" %d",&colaborador[i].idade);
        printf("\nDigite o salario do colaborador %d:", i+1);
        scanf(" %f",&colaborador[i].salario);
        system("cls");
        cabecalho();
    }
    for(int j = 0; j < 5; j++){
        printf("\nColaborador %d - ID: %d, Nome: %s, Idade: %d, Salario: %.2f R$\n\n", j, colaborador[j].ID, colaborador[j].nome, colaborador[j].idade, colaborador[j].salario);
    }
}

void cabecalho() {
    printf("*******************************\n");
    printf("***CADASTRO DE COLABORADORES***\n");
    printf("*******************************\n");
}

