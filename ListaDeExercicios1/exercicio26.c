#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*26. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração,
em segundos, de uma experiência biológica. O programa deve resultar com o novo horário
(hora, minuto e segundo) do termino da mesma.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int duracao, horas, minutos, segundos, restoDiv;

    printf("*****TEMPO DE DURAÇÃO EXPERIÊNCIA BIOLÓGICA*****\n");
    printf("\nInsira o horário de início:");
    printf("\n\nInsira as horas: ");
    scanf("%d", &horas);
    printf("\nInsira os minutos: ");
    scanf("%d", &minutos);
    printf("\nInsira os segundos: ");
    scanf("%d", &segundos);

    printf("\nInsira o tempo de duração em segundos: ");
    scanf("%d", &duracao);

    restoDiv = (duracao + segundos) % 3600;
    horas = (duracao + (horas * 3600)) / 3600;
    minutos = (restoDiv + (minutos * 60)) / 60;
    segundos = (restoDiv % 60);

    printf("\nO horário de término será:\n");
    printf("\n%d Horas, %d Minutos e %d Segundos", horas, minutos, segundos);

    return (0);
}
