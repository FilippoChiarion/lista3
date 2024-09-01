#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    char opc;
    int i,n=1,m;
    float valor,soma,media;

    for (i=1;i<=n;i++){
    printf("O valor da %iª ",i);
    fflush(stdin);
    scanf("%f",&valor);
    printf("Mais mercadorias?(S=1/N=0) ");
    fflush(stdin);
    scanf("%i",&m);
    n+=m;

    soma += valor;
    }

    media=soma/n;
    printf("\n\nO valor total e de: R$%.2f\nA media e de: R$%.2f\n",soma,media);
    }
