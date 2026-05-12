/*6. Faça uma função que calcule a potencia de um número. Crie um programa que leia
a base e o expoente, e utilize a função para mostrar o resultado.*/

#include <stdio.h>
#include <stdlib.h>

float calculaPotencia(float base, float expoente);

int main(){
    float base;
    float expoente;
    char entrada[50];

    printf("digite a base da potencia: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%f", &base) != 1){

        printf("a base foi digitada errada \n");
        exit(1);
    }

    printf("digite o expoente : ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%f", &expoente) != 1){

        printf("digitou errado\n");
    }
    
    printf(" o resultado da conta foi %f \n", calculaPotencia(base, expoente));
    
}


float calculaPotencia(float base, float expoente){
    float resultado = 1;
    
    for(int i = 0; i < expoente; i++){

        resultado = resultado * base;
    }
    return resultado;
}
