#include <stdio.h>

int recursiva(int i);
int iterativa(int n);

void main() {
    int n, x;
    printf("Entre com um numero: ");
    scanf("%d", &n);

    printf("\nVersao iterativa\n\n");
    iterativa(n);

    printf("\nVersao recursiva\n\n");
    x = recursiva(n);
    printf("%d\n",x);

}

int recursiva(int x) {
    if(x == 0) {
        return 0;
    }
    printf("%d\n", x);
    return recursiva(x - 1);
}

int iterativa(int n) {
    for(int i = n; i >= 0; i--){
        printf("%d\n", i);
    }
}
