//Conversão recursiva de decimal para binario.

#include <stdio.h>

void decimalParaBinario(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    if (n == 1) {
        printf("1");
        return;
    }   
    
    decimalParaBinario(n / 2);

    printf("%d", n % 2);
}

int main() {
    int numero;

    printf("Número decimal: ");
    scanf("%d", &numero);
    
    printf("O número $d em binário é: ", numero);
    decimalParaBinario(numero);
    printf("\n");
    
    return 0;
}