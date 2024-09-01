#include <stdio.h>
void main(){
    int i,n,a;
    printf("Numero de camadas: ");
    fflush(stdin);
    scanf("%i",&n);

    for (i=n;i>0;i--){
        for (a=0;a<i;a++){
            printf("*");
        }
    printf("\n");
    }
}
