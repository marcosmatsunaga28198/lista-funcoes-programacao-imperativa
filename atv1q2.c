#include <stdio.h>
#include <string.h>

float pesoIdeal(float altura, char sexo[]);

int main(){
    char entrada[50];
    char sexo[3];
    float alt;

    do{
        printf("digite seu sexo m para masculino e f para feminino\n");
        fgets(sexo, sizeof(sexo), stdin);
        sexo[strcspn(sexo, "\n")] = '\0';
    }while(strcmp(sexo, "m") != 0  && strcmp(sexo, "f") !=0 );
    
    do{
        printf("digite a alt da pessoa\n");
        fgets(entrada, sizeof(entrada), stdin);
    }while(sscanf(entrada, "%f", &alt) != 1   ||  alt <= 0);
    
    printf("o peso ideal da pessoa seria %.2f\n", pesoIdeal(alt,sexo));

    return 0;
}


float pesoIdeal(float altura, char sexo[]){
    float peso;

    if(strcmp(sexo, "m") == 0){
        
        peso = 72.7 * altura - 58;
    }else{

        peso = 62.1 * altura - 44.7;
    }
    return peso;
}
