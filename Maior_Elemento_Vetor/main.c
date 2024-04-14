//Função que retorna o maior elemento do vetor.

#include <stdio.h>

int maior(int n, int *vetor) {
    if (n == 1)
        return vetor[0];
        
    int max_resto = maior(n -1, vetor + 1);
    
    if (vetor[0] > max_resto)
        return vetor[0];
    else
        return max_resto;
    
}

int main() {
    int vetor[] = {15, 35, 8, 5352, 15}; //exemplo de vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int max = maior(tamanho, vetor);
    printf("Maior elemento do vetor: %d", max);
    
    
    return 0;
}