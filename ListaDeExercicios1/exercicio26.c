#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*26. Fa�a um programa para leia o hor�rio (hora, minuto e segundo) de in�cio e a dura��o,
em segundos, de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio
(hora, minuto e segundo) do termino da mesma.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int duracao, horas, minutos, segundos, restoDiv;

    printf("*****TEMPO DE DURA��O EXPERI�NCIA BIOL�GICA*****\n");
    printf("\nInsira o hor�rio de in�cio:");
    printf("\n\nInsira as horas: ");
    scanf("%d", &horas);
    printf("\nInsira os minutos: ");
    scanf("%d", &minutos);
    printf("\nInsira os segundos: ");
    scanf("%d", &segundos);

    printf("\nInsira o tempo de dura��o em segundos: ");
    scanf("%d", &duracao);

    restoDiv = (duracao + segundos) % 3600;
    horas = (duracao + (horas * 3600)) / 3600;
    minutos = (restoDiv + (minutos * 60)) / 60;
    segundos = (restoDiv % 60);

    printf("\nO hor�rio de t�rmino ser�:\n");
    printf("\n%d Horas, %d Minutos e %d Segundos", horas, minutos, segundos);

    return (0);
}
