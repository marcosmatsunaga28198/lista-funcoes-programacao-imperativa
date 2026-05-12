/*Faça um algoritmo que receba um número inteiro positivo N e calcule o seu
fatorial.*/

#include <stdio.h>
#include <stdlib.h>

unsigned int calculaFatorial(unsigned int numero);

int main(){
    unsigned int numero;
    char entrada[50];
    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%u", &numero) != 1){

        printf("digitou o numero errado");
        exit(1);
    }
    
    printf("o fatorial calculado seria %u \n", calculaFatorial(numero));

    return 0;
}


unsigned int calculaFatorial(unsigned int numero){
    unsigned int  somaTotal = 1;
    for(unsigned int i = 1; i <= numero; i++){
        somaTotal = somaTotal * i;
    }
    return somaTotal;
}
