/*Faça uma função que receba uma matriz de 5 x 5 elementos. Calcule a soma dos
elementos que estão na diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>

float somaDiagonalPrincipal(float *matriz, int tamanho);
void printaMatriz(int tamanho, float matriz[tamanho][tamanho] );

int main(){
    int tamanho = 10;
    float matriz[tamanho][tamanho];

    for(int i = 0; i < tamanho;i++){
        for(int j = 0; j < tamanho; j++){
            matriz[i][j] = rand() % 2;
        }
    }

    printaMatriz(tamanho,matriz);

    printf("a soma da diagona principal seria %f\n", somaDiagonalPrincipal(&matriz[0][0], tamanho));
    return 0;
}

void printaMatriz(int tamanho, float matriz[tamanho][tamanho] ){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

float somaDiagonalPrincipal(float *matriz, int tamanho){
    float soma = 0;

    for(int i = 0; i < tamanho; i++){

        for(int j = 0 ; j < tamanho; j++){

            if(i == j){

                soma = soma + matriz[i * tamanho + j];
            }
        }
    }
    return soma;
}
