#include <stdio.h>
#include <locale.h>

/*16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float premio = 780000.00;

    printf("***PRÊMIO DO CONCURSO***\n");

    printf("\nO valor do prêmio é de: %.2f R$", premio);
    printf("\nPrimeiro lugar: %.2f R$", premio * 0.46);
    printf("\nSegundo lugar: %.2f R$", premio * 0.32);
    printf("\nterceiro lugar: %.2f R$", premio * 0.22);

    return(0);
}
