/*Faça uma função que receba a altura e o raio de um cilindro circular e retorne o
volume do cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaVolumeCilindro(float raio, float altura);

int main(){
   char entrada[50];
   float raio, altura;

   printf("digite o valor da raio\n");
   fgets(entrada, sizeof(entrada), stdin);
   if(sscanf(entrada, "%f", &raio) != 1 || raio < 0){

       printf("o valor foi digitado errado \n");
       exit(1);
   }

   printf("digite o valor da altura\n");
   fgets(entrada, sizeof(entrada), stdin);
   if(sscanf(entrada, "%f", &altura) != 1 || altura< 0){

       printf("o valor foi digitado errado \n");
       exit(1);
   }

   printf("o valor do volume do cilindro seria: %f", calculaVolumeCilindro(raio, altura));
   return 0;
}

float calculaVolumeCilindro(float raio, float altura){
    float volumeCilindro;

    volumeCilindro = M_PI * pow(raio, 2) * altura;
    return volumeCilindro;
}

