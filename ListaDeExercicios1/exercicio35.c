#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*35. Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Kelvin.
A f�rmula de convers�o �:K=C+273,15, sendo C a temperatura em Celsius e K atemperatura em Kelvin.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float temperatura, conversao;

    printf("*****CONVERS�O CELSIUS PARA KELVIN*****\n\n");
    printf("Insira o valor da temperatura em �C: ");
    scanf("%f", &temperatura);

    conversao = temperatura + 273.15;

    printf("\n\nA temperatura convertida em Kelvin �: %.2f K", conversao);


    return (0);

}
