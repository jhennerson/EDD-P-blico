#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
} FUNCIONARIO;

FUNCIONARIO coletaDados ();
int imprimeDados(FUNCIONARIO sujeito);
void cabecalho();

int main () {

    cabecalho();
    FUNCIONARIO pessoa = coletaDados();
    imprimeDados(pessoa);
    reajuste(&pessoa);
    rel_salario_corrigido(&pessoa);
}

FUNCIONARIO coletaDados () {
    char pegaNome[30];

    FUNCIONARIO colaborador;

        printf("\nDigite o ID do colaborador: ");
        scanf(" %d",&colaborador.ID);
        printf("\nDigite o nome do colaborador: ");
        fflush(stdin);
        fgets(pegaNome, 29, stdin);
        pegaNome[strlen(pegaNome) - 1] = '\0';
        strcpy(colaborador.nome, pegaNome);
        printf("\nDigite a idade do colaborador: ");
        scanf(" %d",&colaborador.idade);
        printf("\nDigite o salario do colaborador: ");
        scanf(" %f",&colaborador.salario);
        system("cls");
        cabecalho();

    return colaborador;
}

int imprimeDados(FUNCIONARIO sujeito) {
    system("cls");
    printf("Colaborador - ID: %d, Nome: %s, Idade: %d, Salario: %.2f R$\n\n", sujeito.ID, sujeito.nome, sujeito.idade, sujeito.salario);
}

void reajuste (FUNCIONARIO *sujeito) {
    sujeito->salario = sujeito->salario + (sujeito->salario * 0.1);
}

int rel_salario_corrigido(FUNCIONARIO sujeito) {
    printf("\n%s   %.2f R$", sujeito.nome, sujeito.salario);
}

void cabecalho() {
    printf("*******************************\n");
    printf("***CADASTRO DE COLABORADORES***\n");
    printf("*******************************\n");
}
