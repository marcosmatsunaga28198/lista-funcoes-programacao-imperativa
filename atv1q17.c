/*17. Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o
resultado da seguinte série: s = 2/4 + 5/5 + 10 / 6 + ... + (n^2 +1)/(n + 3)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaFuncao(int numero);

int main(){
    int numero;
    char entrada[50];

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){

        printf("digitou errrado ");
        exit(1);
    }

    printf("o somatorio seria %f \n", calculaFuncao(numero));
    return 0;
}


float calculaFuncao(int numero){
    float soma = 0;

    for(int i = 1; i <= numero; i++){

        soma = soma + (pow(i, 2) + 1)/(i + 3);
    }
    return soma;
}
