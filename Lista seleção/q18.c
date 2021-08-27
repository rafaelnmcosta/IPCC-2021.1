#include <stdio.h>

int main(){

    char n1, n2, n3;
    int a, b, c, menor, medio, maior;

    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c%c%c", &n1, &n2, &n3);

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
    
    switch (n1){
        case 'A':
            printf("%d ", menor);
        break;

        case 'B':
            printf("%d ", medio);
        break;

        case 'C':
            printf("%d ", maior);
        break;
    }
    
    switch (n2){
        case 'A':
            printf("%d ", menor);
        break;

        case 'B':
            printf("%d ", medio);
        break;

        case 'C':
            printf("%d ", maior);
        break;
    }

    switch (n3){
        case 'A':
            printf("%d\n", menor);
        break;

        case 'B':
            printf("%d\n", medio);
        break;

        case 'C':
            printf("%d\n", maior);
        break;
    }

    return 0;
}