#include <stdio.h>
void main(){
    int n1,n2,divisao;
    printf("Valor 1: ");
    fflush(stdin);
    scanf("%i",&n1);

    do{
        printf("Valor 2: ");
        fflush(stdin);
        scanf("%i",&n2);
    }
    while (n2==0);

    divisao = n1/n2;
    printf("O resultado da divisao e %i",divisao);
}
