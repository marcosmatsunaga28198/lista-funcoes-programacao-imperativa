/*Faça uma função que receba uma matriz de 8 x 5 elementos e exiba a sua matriz
transposta.*/
#include <stdio.h>
#include <stdlib.h>

void mostraTransposta(float **matriz, int linha, int coluna);

int main(){
    int linha = 8;
    int coluna = 5;
    float **matriz;

    matriz = (float**)malloc(sizeof(float*) * coluna);
    if(matriz == NULL){
        printf("problema de alocacao de de coluna\n");
        exit(1);
    }

    for(int i = 0; i < coluna; i++){
        matriz[i] = (float*)malloc(sizeof(float) * linha);

        if(matriz[i] == NULL){
            printf("problema de alocacao de linha\n");
            exit(1);
        }

        for(int j = 0; j < linha; j++){
            matriz[i][j] = rand() % 100;
            printf("%2.1f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    mostraTransposta(matriz, linha, coluna);

    for(int i = 0 ; i < coluna; i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}

void mostraTransposta(float **matriz, int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%2.1f ", matriz[j][i]);
        }
        printf("\n");
    }
}

