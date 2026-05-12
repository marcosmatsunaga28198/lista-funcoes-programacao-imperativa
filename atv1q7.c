/*Faça uma função que receba um valor inteiro como parâmetro e retorne 1 se o
número for primo, caso contrário retornar 0.*/

#include <stdio.h>
#include <stdlib.h>

int calculaPrimo(int numero);

int main(){
    char entrada[40];
    int numero;

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1){

        printf("digitou errado");
        exit(1);
    }

    if(calculaPrimo(numero)){

        printf("o numero e primo\n");
    }else {

        printf("nao e primo\n");
    }
    return 0;
}


int calculaPrimo(int numero){

    for(int i = 2; i < numero; i++){
        if(numero <= 1){
            return 0;
    }
        if(numero % i == 0){

            return 0;
        }
    }
    return 1;
}
