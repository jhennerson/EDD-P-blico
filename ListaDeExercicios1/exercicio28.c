#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*28. Faça um algoritmo que calcule a média ponderada das notas de 3 provas.
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2.
Antes de o usuário entrar com as notas do aluno ele deve entrar com o número de matricula do aluno.
Ao final, mostrar a matricula do aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado.
A nota para aprovação deve ser igual ou superior a 60 pontos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    char matricula[7];

    printf("*****MÉDIA PONDERADA*****\n\n");

    printf("Insira o número da matrícula: ");
    scanf("%s", &matricula);

    printf("\nInsira a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("\nInsira a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("\nInsira a nota da terceira prova: ");
    scanf("%f", &nota3);

    media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 4;

    if (media >= 6) {
        printf("\nMatrícula: %s média: %f", matricula, media);
        printf("\nSituação: Aprovado");
    } else {
        printf("\nMatrícula: %s média: %f", matricula, media);
        printf("\nSituação: Rerovado");
    }

    return (0);
}
