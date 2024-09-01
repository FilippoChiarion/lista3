#include <stdio.h>
void main(){
   int n,i;
   printf("Me de o valor de n: ");
   fflush(stdin);
   scanf("%i",&n);

   for (i=1;i<=n;i++){printf("%i\n",i);}
}
