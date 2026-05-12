/*Escreva uma função que receba um número inteiro N (0 < N < 10000) e retorne a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o
valor 8 (2 + 5 + 1).*/
#include <stdio.h>
#include <stdlib.h>

int somaAlgarismo(int numero);

int main(){
    char entrada[50];
    unsigned int numero;
    
    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero > 10000){
        printf("digitou errado ou numero foi muinto grande\n");
        exit(1);
    }
    printf(" a soma do algarismos seria %d \n", somaAlgarismo(numero));
}


int somaAlgarismo(int numero){
    int somaTotal = 0;

    while(numero != 0){

        somaTotal = somaTotal + (numero %10);
        numero = numero / 10;
    }
    return somaTotal;
}
