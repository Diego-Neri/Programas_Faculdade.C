#include <stdio.h>

unsigned long long int fatorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    unsigned int num;
    printf("Digite um número inteiro não negativo: ");
    scanf("%u", &num);

    if (num < 0) {
        printf("O número deve ser não negativo.\n");
    } else {
        unsigned long long int resultado = fatorial(num);
        printf("O fatorial de %u é %llu.\n", num, resultado);
    }

    return 0;
}