/*18. Faça uma função que receba um vetor de inteiros como parâmetro e retorne
quantos valores pares ele possui.*/
#include <stdio.h>
#include <stdlib.h>

int contaPares(int *p, int tamanhoVetor);

int main(){
    int numero;
    char entrada[50];
    int *vetor;

    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){

        printf("digitou errado");
        exit(1);
    }
    vetor = (int*)malloc(sizeof(int) * numero );

    for(int i = 0; i < numero; i++){

        vetor[i] = rand() % 100;
    }
    
    for(int i = 0; i < numero; i++){

        printf(" %d ", vetor[i]);
    }
    
    printf("\n");
    printf("o numero de numeros pares seria %d\n", contaPares(vetor, numero));
    return 0;
}


int contaPares(int *p, int tamanhoVetor){
    int contaPar = 0;

    for(int i = 0; i < tamanhoVetor; i++){

        if(p[i] % 2 == 0){

            contaPar++;
        }
    }

    return contaPar;
}

