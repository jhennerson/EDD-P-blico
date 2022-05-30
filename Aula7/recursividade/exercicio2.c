#include <stdio.h>
#include <locale.h>

//Resposta: A fun��o calcula a soma entre o n�mero inserido e todos os seus antecessores maiores ou igual a zero.

int func(int n);
int funcIt(int n);

void main() {
    setlocale(LC_ALL, "");
    int n, x, t;
    printf("Entre com um numero: ");
    scanf("%d", &x);

    printf("Selecione o tipo de fun��o [1]ITERATIVA [2]RECURSIVA : ");
    scanf("%d", &t);
    switch(t){
    case 1:
        printf("\nVers�o iterativa\n\n");
        n = funcIt(x);
        printf("%d\n",n);
        break;
    case 2:
        printf("\nVers�o recusiva\n\n");
        n = func(x);
        printf("%d\n",n);
        break;
    default:
        printf("Valor inv�lido!");
        break;
    }

}

int func(int n) {
    if(n == 0) {
        return 0;
    }
    return (n + func(n - 1));
}

int funcIt(int n) {
    int j;
    for(int i = n; i >= 0; i--){
        j = j + i;
    }
    return j;
}
