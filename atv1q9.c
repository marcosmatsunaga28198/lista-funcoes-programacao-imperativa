/*Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na
tela no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de
janeiro de 2000.*/

#include <stdio.h>
#include <stdlib.h>

void printaDias(int dia, int mes, int ano);

int main(){
    char entrada[50];
    int dia, ano, mes;

    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d/%d/%d",&dia, &mes, &ano) != 3  || dia < 1 || dia > 30 || mes < 1 || mes > 12){

        printf("digitou errado");
        exit(1);
    }
    printaDias(dia, mes, ano);
    return 0;
}


void printaDias(int dia, int mes, int ano){
    char *mesAno[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novenbro", "dezembro"};
    printf("%d de %s de %d", dia, mesAno[mes - 1], ano);

}
