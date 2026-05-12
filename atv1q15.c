/*Crie uma função que receba como parâmetro um valor inteiro e gere como saída N
linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!*/

#include <stdio.h>
#include <stdlib.h>

void meiaPiramide(unsigned int numero);

int main(){
    int numero;
    char entrada[50];
    
    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){

        printf("digitou errado \n");
        exit(1);
    }

    meiaPiramide(numero);
    return 0;
}


inline void meiaPiramide(unsigned int numero){

    for(int i = 1; i <= numero; i++){

        for(int j = 0; j < i; j++){

            printf("!");
        }
        printf("\n");
    }
}
