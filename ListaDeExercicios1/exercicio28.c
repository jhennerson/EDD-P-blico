#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*28. Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas.
A primeira e a segunda prova t�m peso 1 e a terceira tem peso 2.
Antes de o usu�rio entrar com as notas do aluno ele deve entrar com o n�mero de matricula do aluno.
Ao final, mostrar a matricula do aluno juntamente com a sua m�dia e indicar se o aluno foi aprovado ou reprovado.
A nota para aprova��o deve ser igual ou superior a 60 pontos.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    char matricula[7];

    printf("*****M�DIA PONDERADA*****\n\n");

    printf("Insira o n�mero da matr�cula: ");
    scanf("%s", &matricula);

    printf("\nInsira a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("\nInsira a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("\nInsira a nota da terceira prova: ");
    scanf("%f", &nota3);

    media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 4;

    if (media >= 6) {
        printf("\nMatr�cula: %s m�dia: %f", matricula, media);
        printf("\nSitua��o: Aprovado");
    } else {
        printf("\nMatr�cula: %s m�dia: %f", matricula, media);
        printf("\nSitua��o: Rerovado");
    }

    return (0);
}
