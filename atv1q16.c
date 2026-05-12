/*Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por
exemplo, a saída para n = 6 seria:
     *
    ***
   *****
  *******
 *********
***********/

#include <stdio.h>
#include <stdlib.h>

void geraTriangulo(unsigned int numero);

int main(){
    int numero;
    char entrada[50];

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){

        printf("digitou errrado\n");
        exit(1);
    }
    geraTriangulo(numero);
    return 0;
}


void geraTriangulo(unsigned int numero){
    int base, aux = numero, j = 1;
    for(int i = 1; i <= numero; i++){
        base = 2 * i -1;
        while(j < aux){
            printf(" ");
            j++;
        }
        j = 1;
        aux--;
        for(int x = 0; x < base; x++){
            printf("*");
        }
        printf("\n");

    }   
}
