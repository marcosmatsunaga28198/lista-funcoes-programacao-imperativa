/*23. Faça uma função que receba uma matriz de 5 x 5 elementos. Calcule a soma dos
elementos que estão na diagonal secundária.*/
#include <stdio.h>
#include <stdlib.h>

float somaDiagonalSecundaria(float **matriz, int tamanho);

int main(){
    int tamanho = 8;
    float **matriz;

    matriz = (float**)malloc(sizeof(float*) * tamanho);


    if(matriz == NULL){

        printf("erro de alocacao de coluna");
        exit(1);
    }

    for(int i = 0; i < tamanho; i++){
        matriz[i] = (float*)malloc(sizeof(float) * tamanho);
        if(matriz[i] == NULL){

            printf("erro de alocacao de coluna");
            exit(1);
        }

        for(int j = 0; j < tamanho; j++){

            matriz[i][j] = rand() % 2;
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    printf("a soma da diagonal secundária e: %.2f", somaDiagonalSecundaria(matriz, tamanho));

    for(int i = 0; i < tamanho; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

float somaDiagonalSecundaria(float **matriz, int tamanho){
    int soma = 0;

    for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < tamanho; j++){

            if(i + j == tamanho-1){

                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}
