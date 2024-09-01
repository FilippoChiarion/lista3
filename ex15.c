#include <stdio.h>
void main(){
    int soma=0,i;
    float quantidade=0,media;
    for (i=15;i<=100;i++){
        soma += i;
        quantidade++;
        printf("\n%i\ni=%i\n%.0f\n",soma,i,quantidade);
    }
    media = soma/quantidade;
    printf("A media e de %.2f",media);
}
