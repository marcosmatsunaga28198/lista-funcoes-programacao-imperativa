/*Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
. Faça uma função que receba os valores de a e b e calcule o

valor da hipotenusa através da equação.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaHipotenusa( float catetoOposto, float catetoAdjacente);

int main(){
    float catetoOposto, catetoAdjacente;
    char entrada[40];

    printf("digite o valoe do cateteto oposto");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%f", &catetoOposto) != 1  || catetoOposto < 0){

        printf("digitou errado\n");
        exit(1);
    }
    printf("digite o valoe do cateteto adjacente");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%f", &catetoAdjacente) != 1 || catetoAdjacente < 0){

        printf("digitou errado\n");
        exit(1);
    }

    printf("o valor da hipotenusa seria: %f\n", calculaHipotenusa(catetoOposto, catetoAdjacente) );

    return 0;
}


float calculaHipotenusa( float catetoOposto, float catetoAdjacente){
     float hipotenusa;

    hipotenusa = sqrt(pow(catetoOposto, 2)+ pow(catetoAdjacente, 2) );
    return hipotenusa;
}
