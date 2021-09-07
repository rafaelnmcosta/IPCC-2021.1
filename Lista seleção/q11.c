#include <stdio.h>

int main(){

    double a, b, c, menor, maior, medio;

    scanf("%lf %lf %lf", &a, &b, &c);

    menor = a;
    if(menor > b) menor = b;
    if(menor > c) menor = c;

    maior = a;
    if(maior < b) maior = b;
    if(maior < c) maior = c;

    //if que confere se há um numero repetido pra definir o numero medio
    if(a==b||b==c||a==c){
        if(a==b || a==c) medio = a;
        if(b==a || b==c) medio = b;
    }
    else{
        if(a>menor && a<maior) medio = a;
        if(b>menor && b<maior) medio = b;
        if(c>menor && c<maior) medio = c;
    }

    printf("%.2lf, %.2lf, %.2lf\n", menor, medio, maior);

    return 0;
}