/*Faça uma função que receba um vetor de inteiros como parâmetro e retorne o
maior valor presente no vetor.*/
#include <stdio.h>
#include <stdlib.h>

int maiorDoVetor(int *vetor, int tamanhoDoVetor);

int main(){
    int numero;
    char entrada[50];
    int *vetor;

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){

        printf("digitou errado\n");
        exit(1);
    }
    
    vetor = (int*)malloc(sizeof(int) * numero);

    for(int i = 0; i < numero; i++){

        vetor[i] = rand() % 100;
        printf("%d " ,vetor[i]);
    }

    printf("\n");
    printf("o maior elemento do vetor seria: %d\n", maiorDoVetor(vetor, numero));
    return 0;
}


int maiorDoVetor(int *vetor, int tamanhoDoVetor){
    int maiorElemento = vetor[0];

    for(int i = 0; i < tamanhoDoVetor; i++){

        if(vetor[i] > maiorElemento){

            maiorElemento = vetor[i];
        }
    }

    return  maiorElemento;
}
