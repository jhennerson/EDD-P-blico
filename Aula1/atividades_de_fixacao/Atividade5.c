/* Digite o exemplo anterior e verifique seu funcionamento;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[20] = "Brasileiro";
    char string2[20] = "Brasil";
    char letra = 's';
    int x, cont1 = 0, cont2 = 0;

    for(x = 0; x < strlen(string1); x++){
        if(string1[x] == letra) {
            cont1++;
        }
    }
    for(x = 0; x < strlen(string1); x++){
        if(string2[x] == letra) {
            cont2++;
        }
    }
    printf("A letra \"%c\" aparece %d vez(es) na string 1", letra   , cont1);
    printf(" e %d vez(es) na string 2", cont2);
}
