#include <stdio.h>
void main(){
    int r,i,n;
    printf("Valor de n: ");
    fflush(stdin);
    scanf("%i",&n);
    for (i=1;i<=10;i++){
        r=i*n;
        printf("%i*%i = %i\n",i,n,r);
        }
}
