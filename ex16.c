#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int i,n;
    float valor,soma,media;
    printf("Mercadorias no estoque: ");
    fflush(stdin);
    scanf("%i",&n);

    for (i=1;i<=n;i++){
    printf("O valor da %iª ",i);
    fflush(stdin);
    scanf("%f",&valor);
    soma += valor;
    }
    media=soma/n;
    printf("O valor total e de: R$%.2f\nA media e de: R$%.2f",soma,media);
}
