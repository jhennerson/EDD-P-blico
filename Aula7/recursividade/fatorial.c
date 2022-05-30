#include <stdio.h>

int fatorial (int n);

int main() {
    int a, r;
    a = 4;
    r = fatorial(a);
    printf("O fatorial e %d ", r);
}

int fatorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}
