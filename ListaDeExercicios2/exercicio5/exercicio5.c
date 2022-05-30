/*5 – Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço
  de uma pessoa. Agora, escreva uma função que receba um inteiro “n” e retorne o ponteiro para um bloco
  de memória de tamanho “n” bytes, alocado dinamicamente, para ser utilizado como vetor desse tipo de
  estrutura. Solicite também que o usuário digite os dados desse vetor dentro de uma outra função
  especializada em coletar dados.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro {
    char nome[30];
    char endereco[40];
    int idade;
} Cadastro;

Cadastro *aloca_cadastro(int n);
void coleta_dados(Cadastro *pessoa, int n);
void cabecalho(void);

int main() {
    int n;
    Cadastro *pessoas;
    cabecalho();
    printf("\nInsira a quantidade de pessoas que deseja cadastrar: ");
    scanf("%d", &n);

    pessoas = aloca_cadastro(n);

    coleta_dados(&pessoas, n);

    free(pessoas);
}

Cadastro *aloca_cadastro(int n) {
    Cadastro *pessoa = (Cadastro*) malloc(n * sizeof(Cadastro));
    if(pessoa == NULL) {
        printf("\nEspaço insuficiente!");
        exit(1);
    }
    return pessoa;
}

void coleta_dados(Cadastro *pessoa, int n) {
    for(int i = 0; i < n; i++) {
        cabecalho();
        printf("\nInsira o nome da pessoa %d:", i+1);
        fflush(stdin);
        gets(&pessoa[i].nome);
        fflush(stdin);
        printf("\nInsira a idade da pessoa %d (anos):", i+1);
        scanf("%d", &pessoa[i].idade);
        fflush(stdin);
        printf("\nInsira o endereco da pessoa %d:", i+1);
        gets(&pessoa[i].endereco);
        fflush(stdin);
    }
    system("cls");
    printf("\nCadastro realizado com sucesso!");
}

void cabecalho(void) {
    system("cls");
    printf("******CADASTRO******\n\n");
}
