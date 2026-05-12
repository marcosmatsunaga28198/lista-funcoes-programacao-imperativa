/*21. Faça uma função que receba uma matriz de 5 x 5 elementos. Calcule a soma dos
elementos que estão abaixo da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int somaAbaixoDiagonal(int **matriz, int tamanho);

int main(){
    int **matriz;

    matriz = (int**)malloc(sizeof(int*) * TAMANHO);
    if(matriz == NULL){

        printf("erro de alocacao de coluna");
        exit(1);
    }

    for(int i = 0; i< TAMANHO; i++){

        matriz[i] = (int*)malloc(sizeof(int) * TAMANHO);
        if(matriz[i] == NULL){

            printf("erro de alocacao de linha");
            exit(1);
        }
        for(int j = 0; j< TAMANHO; j++ ){

            matriz[i][j] = rand()% 2;
            printf("%d ", matriz [i][j]);
        }
        printf("\n");
    }

    printf("a soma abaixo da diagonal seria: %d", somaAbaixoDiagonal(matriz,TAMANHO));
    return 0;
}


int somaAbaixoDiagonal(int **matriz, int tamanho){
    int soma = 0;

    for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < tamanho; j++){

            if(i > j){

                soma = soma + matriz[i][j];   
            }
        }
    }
    return soma;
}
