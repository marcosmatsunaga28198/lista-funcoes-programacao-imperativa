/*Faça uma função que receba uma matriz de 5 x 5 elementos. Calcule a soma dos
elementos que estão acima da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int somaAcimaDiagonal(int tamanho, int matriz[tamanho][tamanho]);

int main(){
    int matriz[TAMANHO][TAMANHO];
    for(int i =0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            matriz[i][j] = rand() % 2;
            printf("%d ",matriz[i][j] );
        }
        printf("\n");
    }
    printf(" a soma da diagonal principal seria : %d \n", somaAcimaDiagonal(TAMANHO, matriz));
    return 0;


}


int somaAcimaDiagonal(int tamanho, int matriz[tamanho][tamanho]){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho ; j++){
            if(i>=j){
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
    
}
