/*Faça uma função que receba 3 números inteiros como parâmetros, representando
horas, minutos e segundos, e os converta em segundos.*/
#include <stdio.h>
#include <stdlib.h>

int converteParaSegundos(int horas, int minutos, int segundos);

int main(){
    int horas, minutos, segundos;   
    char entrada[50];
    printf("digite as horas: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &horas) != 1 || horas < 0) {
        
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os minutos: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &minutos) != 1 || minutos < 0){
        
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os segundos : ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &segundos) != 1 || segundos < 0){
        
        printf("digitou errado \n");
        exit(1);
    }

    printf("convetendo tudo para segudos temos %d", converteParaSegundos(horas, minutos, segundos));
    return 0;
}


int converteParaSegundos(int horas, int minutos, int segundos){
    segundos = segundos + (horas * 60 * 60) + (minutos * 60);
    return segundos;
}



