#include <stdio.h>

unsigned long long int fatorial(unsigned int n) {
    unsigned long long int resultado = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    unsigned int num;
    printf("Digite um número inteiro não negativo: ");
    scanf("%u", &num);

    // Verifica se o número é não negativo
    if (num < 0) {
        printf("O número deve ser não negativo.\n");
    } else {
        unsigned long long int resultado = fatorial(num);
        printf("O fatorial de %u é %llu.\n", num, resultado);
    }

    return 0;
}