#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

float volumeEsfera(float raio);

int main(){
    char entrada[50];
    int raio;

    printf("digite o raio da esfera: ");
    fgets(entrada, sizeof(entrada), stdin);
    if( sscanf(entrada, "%d", &raio) != 1 || raio < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("o volume da esfera seria : %.2f ", volumeEsfera(raio));
    return 0;
}

float volumeEsfera(float raio){

    return 4.0/3.0*PI*pow(raio,3);
}
