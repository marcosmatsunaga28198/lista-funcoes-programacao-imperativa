/*Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito
perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex:
6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar 1 se o
número for perfeito. Caso contrário retornar 0.*/

#include <stdio.h>
#include <stdlib.h>

int calculaNumeroPerfeito(int numero);

int main(){
    int numero;
    char entrada[50];

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1){

        printf("digitou um numero errrado\n");
        exit(1);
    }

    if(calculaNumeroPerfeito(numero) == 1){

        printf("e um numero perfeito \n");
    }else{

        printf("nao e perfeito \n");
    }
    return 0;
}


int calculaNumeroPerfeito(int numero){
    int acumulaPerfeito = 0;
    for(int i = 1; i < numero; i++){

        if(numero % i == 0){

            acumulaPerfeito = acumulaPerfeito + i;
        }
    }

    if(acumulaPerfeito == numero){

        return 1;
    }else{

        return 0;
    }
}
