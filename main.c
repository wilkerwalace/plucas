#include <stdio.h>
#define max_rows 5
#define max_columns 5

int main(void) {

    int matriz[max_rows][max_columns];
    int i = 0;
    int j=0;
    int atb = 1;
    int ref = 0;
    int atual = 0;
    //criar e preencher um array 2D 5X5 COM NUMEROS SEQUENCIAIS
    for (int i = 0;i<5;i++){
        for (int j=0;j < 5; j++) {
            matriz[i][j]= atb++;
        }
    }
    for (int i = 0;i<5;i++){
        for (int j=0;j < 5; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
// ESCREVER UM PROGRAMA QUE ENCONTRE O MAIOR NUMERO EM UM ARRAY 2D
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > atual) {
                atual = matriz[i][j];
            }
        }
    }
    printf("O maior é %d\n", atual);

// CALCULAR A A SOMA DOS ELEMENTOS DE CADA LINHA DO ARRAY E MOSTRAR
    for (int i = 0; i< 5 ; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][0] += matriz[i][j];
            }
        ref++;
        printf("a soma da linha %d é %d\n",ref, matriz[i][j]);
        }
    };

