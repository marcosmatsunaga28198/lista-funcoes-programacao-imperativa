#include <stdio.h>
#include <stdlib.h>

int maiorQueZero(int numero);

int main (){
    int numero;
    char entrada[50];

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1){
        printf("nao digitou um numero\n");
        exit(1);
    }
    
    printf(" o numero seria %d \n", maiorQueZero(numero));
    
    return 0;
}

int maiorQueZero(int numero){
    if(numero < 0){

        return -1;
    } else if(numero > 0){

        return 1;
    }else{

        return 0;
    }
}   
