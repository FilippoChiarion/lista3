#include <stdio.h>
void main(){
    float n1,n2,media;

    do {printf("Nota 1: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f",&n2);
    media = (n1+n2)/2;}

    while (n1<0 || n1>10 || n2<0 || n2>10);

    printf("A media do aluno e %.2f",media);
}
