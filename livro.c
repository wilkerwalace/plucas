#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
    typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
    int paginas;
    } Livro;

    Livro biblioteca[5][5]; // uma biblioteca de 5x5 livros



    strcpy(biblioteca[0][0].titulo, "O Senhor dos Anéis");
    strcpy(biblioteca[0][0].autor, "J.R.R. Tolkien");
    biblioteca[0][0].ano = 1954;

    printf("Titulo: %s\n", biblioteca[0][0].titulo);
    printf("Autor: %s\n", biblioteca[0][0].autor);
    printf("Ano: %d\n", biblioteca[0][0].ano);
    return 0;
};