#include <stdio.h>
#include <locale.h>

/*16. A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso. Sendo que da quantia total:
- O primeiro ganhador receber� 46%;
- O segundo receber� 32%;
- O terceiro receber� o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float premio = 780000.00;

    printf("***PR�MIO DO CONCURSO***\n");

    printf("\nO valor do pr�mio � de: %.2f R$", premio);
    printf("\nPrimeiro lugar: %.2f R$", premio * 0.46);
    printf("\nSegundo lugar: %.2f R$", premio * 0.32);
    printf("\nterceiro lugar: %.2f R$", premio * 0.22);

    return(0);
}
