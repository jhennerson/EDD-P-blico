<<<<<<< HEAD
/*1 ñ Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
  conter o n˙mero de matricula do aluno, seu nome e as notas de trÍs provas. Agora,
  escreva um programa que leia os dados de cinco alunos e os armazene-os em um bloco
  de memÛria alocado dinamicamente. Em seguida, exiba um relatÛrio com o nome e as
  notas do aluno que possua a maior mÈdia geral dentre os cinco.*/
=======
/*1 ‚Äì Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o n√∫mero de matricula do aluno, seu nome e as notas de tr√™s provas. Agora,
escreva um programa que leia os dados de cinco alunos e os armazene-os em um bloco
de mem√≥ria alocado dinamicamente. Em seguida, exiba um relat√≥rio com o nome e as
notas do aluno que possua a maior m√©dia geral dentre os cinco.
*/
>>>>>>> aff5fd47d5c2535cfca17fff8113c0ffd9ad2693

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct aluno {
    char nome[30];
    int matricula, nota[3];
}ALUNO;

void tag(char palavra[]);
void cadastro(ALUNO *aluno, int qtdAlunos, int qtdProvas);
ALUNO verificaMaiorMedia(ALUNO *aluno, int qtdAlunos, int qtdProvas);
void resultados();

void main(void) {
    setlocale(LC_ALL, "");
    int qtdAlunos = 5, qtdProvas = 3;

    ALUNO *aluno = (ALUNO*) malloc(qtdAlunos * sizeof(ALUNO));
    if(aluno == NULL) {
        printf("\nEspa√ßo insuficiente!");
        exit(1);
    }

    cadastro(&aluno, qtdAlunos, qtdProvas);

    ALUNO alunoMaiorMedia =  verificaMaiorMedia(&aluno, qtdAlunos, qtdProvas);

    resultados(alunoMaiorMedia, qtdProvas);

    free(aluno);
}

void tag(char palavra[]) {
    printf("+-------------------------------------+\n");
    printf("\t\t%s\n", palavra);
    printf("+-------------------------------------+\n");
}

void cadastro(ALUNO *aluno, int qtdAlunos, int qtdProvas) {
        for(int i = 0; i < qtdAlunos; i++) {
        tag("ALUNOS");
        printf("\nInsira a MATR√çCULA do aluno(a)\n");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        printf("\nInsira o NOME do aluno(a) %d\n", aluno[i].matricula);
        gets(&aluno[i].nome);
        fflush(stdin);
        for(int j = 0; j < qtdProvas; j++) {
            printf("\nInsira a NOTA da prova %d do aluno(a) %s\n", j+1, aluno[i].nome);
            scanf("%d", &aluno[i].nota[j]);
            fflush(stdin);
        }
        system("cls");
        }
}

ALUNO verificaMaiorMedia(ALUNO *aluno, int qtdAlunos, int qtdProvas) {
    ALUNO alunoMaiorMedia;
    int soma = 0, media = 0, maiorMedia = 0;

    for(int i = 0; i < qtdAlunos; i++) {
        soma = 0;
        for(int j = 0; j < qtdProvas; j++) {
            soma = soma + aluno[i].nota[j];
        }
        media = soma / qtdProvas;

        if(media > maiorMedia) {
            maiorMedia = media;
            alunoMaiorMedia.matricula = aluno[i].matricula;
            strcpy(alunoMaiorMedia.nome, aluno[i].nome);
            for(int k = 0; k < qtdProvas; k++) {
                alunoMaiorMedia.nota[k] = aluno[i].nota[k];
            }
        }
    }
    return (alunoMaiorMedia);
}

void resultados(ALUNO alunoMaiorMedia, int qtdProvas) {
    system("cls");
    tag("RESULTADOS");

    printf("\nMelhores notas da turma:\n");
    printf("\nMatr√≠cula: %d", alunoMaiorMedia.matricula);
    printf("\nNome do aluno: %s", alunoMaiorMedia.nome);
    for(int i = 0; i < qtdProvas; i++) {
        printf("\nNota %d: %d", i+1, alunoMaiorMedia.nota[i]);
    }
    printf("\n\n");
    system("pause");
}
