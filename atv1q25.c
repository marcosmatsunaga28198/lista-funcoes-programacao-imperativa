#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Ponto;

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p);

int main(){
    Ponto v1;
    Ponto v2;
    Ponto p;
    char entrada[50];

    printf("digite os valores do ponto  x v1: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &v1.x) != 1 || v1.x < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os valores do ponto  y v1: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &v1.y) != 1 || v1.y < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os valores do ponto  x v2: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &v2.x) != 1 || v2.x < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os valores do ponto  y v2: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &v2.y) != 1 || v2.y < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os valores do ponto  x p: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &p.x) != 1 || p.x < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite os valores do ponto  y p: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &p.y) != 1 || p.y < 0){
        printf("digitou errado \n");
        exit(1);
    }
}


int dentroRet(Ponto *v1, Ponto *v2, Ponto *p){
    if(p->x > v1->x && p->y >v1->y && p->x < v2->x && p->y < v2->y ){
        return 1;
    }
    else {
        return 0;
    }
}
