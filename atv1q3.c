#include <stdio.h>

float velocidadeMedia(float quilometros, int horas);

int main(){
    char entrada[50];
    float quilometros;
    int horas;

    do{
        printf("digite a velocidade: ");
        fgets(entrada, sizeof(entrada), stdin);
    }while(sscanf(entrada, "%f", &quilometros) != 1 || quilometros < 0);

    do{
        printf("digite a horas: ");
        fgets(entrada, sizeof(entrada), stdin);
    }while(sscanf(entrada, "%d", &horas) != 1 || horas < 0);

    printf("a velocidade media seria %.2f\n", velocidadeMedia(quilometros, horas));

    return 0;
}


float velocidadeMedia(float quilometros, int horas){

    return quilometros / horas;
}
