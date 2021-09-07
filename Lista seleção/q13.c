#include <stdio.h>

int main(){

    int a, b, c, d, maior, soma;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    maior = a;
    if(maior <= b) maior=b;
    if(maior <= c) maior=c;
    if(maior <= d) maior=d;

    soma = (a+b+c+d)-maior;

    printf("%d\n", soma);

    return 0;
}