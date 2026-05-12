#include <stdio.h>
#include <stdlib.h>

int parOuImpar(int numero);
int main(){
    int numero;
    char entrada[50];
    
    do{
        
        printf("digite um numero: ");
        fgets(entrada , sizeof(entrada), stdin);
    }while(sscanf(entrada, "%d", &numero) != 1);

    printf("o numero seria %d", parOuImpar(numero));
    return 0;
}

int parOuImpar(int numero){
    if(numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
