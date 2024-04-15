#include <stdio.h>

void mover(int n, int a, int b, int c) {
    if (n == 1) {
        printf("Mover disco de %d para %d\n", a, c);
        return;
    }
    mover(n-1, a, c, b);
    printf("Mover disco de %d para %d\n", a, c);
    mover(n-1, b, a, c);
}

int main() {
    mover(4, 1, 3, 2);
    return 0;
}