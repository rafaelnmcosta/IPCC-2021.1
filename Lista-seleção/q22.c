#include <stdio.h>

int main(){

    int i;
    float a, b, c, menor, medio, maior;

    scanf("%d", &i);
    scanf("%f %f %f", &a, &b, &c);

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

    switch (i){
        case 1:
            // ordem abc
            printf("%.2f %.2f %.2f\n", menor, medio, maior);
        break;
        case 2:
            // ordem cba
            printf("%.2f %.2f %.2f\n", maior, medio, menor);
        break;
        case 3:
            //ordem bca
            printf("%.2f %.2f %.2f\n", medio, maior, menor);
        break;
    }

    return 0;
}