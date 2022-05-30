#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct str_aluno {
    char nome[30];
    float nota;
}MATRICULA;

int coletaDados(MATRICULA *aluno, int qtdAlunos, float *soma);
int imprimeDados(MATRICULA *aluno, int qtdAlunos);

int main(){
    setlocale(LC_ALL, "");

    int qtdAlunos;
    float soma;

    printf("Insira a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    MATRICULA *aluno = (MATRICULA*) malloc(qtdAlunos * sizeof(MATRICULA));

    if(aluno == NULL) {
        printf("\nEspaço insulficiente!");
        exit(1);
    }

    coletaDados(aluno, qtdAlunos, &soma);

    system("cls");

    imprimeDados(aluno, qtdAlunos);

    printf("\n\nA média da sala é: %.1f", (soma / qtdAlunos));

    free(aluno);

    return(0);
}

int coletaDados(MATRICULA *aluno, int qtdAlunos, float *soma) {
    for(int i = 0; i < qtdAlunos; i++) {
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf("%s", &aluno[i].nome);
        printf("\nDigite a nota do aluno %d: ", i+1);
        scanf("%f", &aluno[i].nota);
        (*soma) = (*soma) + (aluno[i].nota);
    }
}

int imprimeDados(MATRICULA *aluno, int qtdAlunos) {
    for(int i = 0; i < qtdAlunos; i++) {
        printf("%s - %.1f\n", aluno[i].nome, aluno[i].nota);
    }
}
