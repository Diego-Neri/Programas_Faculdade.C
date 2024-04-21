#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo [30];
    char autor [30];
    char categoria [30];
    int identificador;
};


int main()
{
    struct Livro livros[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Livro %d: \n", i + 1);
        printf("titulo: ");
        scanf("%s", livros[i].titulo);
        printf("Autor: ");
        scanf("%s", livros[i].autor);
        printf("Categoria: ");
        scanf("%s", livros[i].categoria);
         printf("Identificador: ");
        scanf("%d", &livros[i].identificador);
    }
    
    printf("\nInformações dos livros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Livro %d: \n", i + 1);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Categoria: %s\n", livros[i].categoria);
        printf("Identificador: %d\n", livros[i].identificador);
        
    }
    
    return 0;
}