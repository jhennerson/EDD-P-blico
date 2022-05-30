/*6 � Utilizando o programa do exerc�cio anterior, crie uma rotina (fun��o), para salvar o conte�do
  do vetor em um arquivo de forma bin�ria, que � mais f�cil de utilizar quando trabalhamos com vetores
  de estruturas. Este seu novo programa deve ser capaz de salvar todo o conte�do gerado em uma se��o
  de utiliza��o, para que o mesmo conte�do seja recuperado na pr�xima se��o de utiliza��o, ou seja,
  seu novo programa deve ser capaz de recuperar todos os dados gravados em se��o anterior para
  continuar o processamento.*/

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
int grava_cadastro(Cadastro *pessoa, int n);
int le_cadastro();
void cabecalho(void);

int main() {
    int n;
    Cadastro *pessoas;

    cabecalho();
    printf("\nInsira a quantidade de pessoas que deseja cadastrar: ");
    scanf("%d", &n);

    pessoas = aloca_cadastro(n);

    coleta_dados(pessoas, n);

    grava_cadastro(pessoas, n);

    le_cadastro();

    free(pessoas);
}

Cadastro *aloca_cadastro(int n) {
    Cadastro *pessoa = (Cadastro*) malloc(n * sizeof(Cadastro));
    if(pessoa == NULL) {
        printf("\nEspa�o insuficiente!");
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

int grava_cadastro(Cadastro *pessoa, int n) {
    FILE *f;
    f = fopen("_cadastros.txt", "rb");
    if(f == NULL) {
        f = fopen("_cadastros.txt", "wb");
    }

    fwrite(pessoa, sizeof(Cadastro), n, f);

    fclose(f);
}

int le_cadastro() {
    FILE *f;
    f = fopen("_cadastros.txt", "rb");
    if(f == NULL) {
        printf("Erro na leitura do arquivo!\n");
        system("pause");
        exit(1);
    }

    Cadastro *cad = (Cadastro*) malloc(sizeof(Cadastro));

    cabecalho();

    int i = 1;

    while(fread(cad, sizeof(Cadastro), 1, f)) {
        cad = (Cadastro*) realloc(cad, i * sizeof(Cadastro));
        printf("\nNome: %s \nIdade: %d \nEndereco: %s\n", cad->nome, cad->idade, cad->endereco);
        i++;
    }

    free(cad);
}

void cabecalho(void) {
    system("cls");
    printf("******CADASTRO******\n\n");
}
