#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(0,"Portuguese");
    float n1, n2;
    char sim;
    do{
        do{
            printf("Qual a sua nota da 1� avalia��o? ");
            scanf("%f", &n1);
        }while (n1<=0 || n1>10);
        do{
            printf("Qual a sua nota da 2� avalia��o? ");
            scanf("%f", &n2);
        }while (n2<=0 || n2>10);
        printf("A m�dia � de %.2f", (n1+n2)/2);
        printf("\nNOVO C�LCULO (S/N)? ");
        scanf(" %c", &sim);
    }while (sim=='S'|| sim=='s');
    return 0;
}
