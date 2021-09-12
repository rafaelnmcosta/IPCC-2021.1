#include <stdio.h>

int main(){

    double a, b, c, d, n1, n2, n3, n4, aux;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // Encontra o menor
    n1 = a;
    if(n1 > b) n1 = b;
    if(n1 > c) n1 = c;
    if(n1 > d) n1 = d;

    // Encontra o segundo menor
    if(n1 == a){
        n2 = b;
        if(n2 > c) n2 = c;
        if(n2 > d) n2 = d;
    }
    else if(n1 == b){
        n2 = a;
        if(n2 > c) n2 = c;
        if(n2 > d) n2 = d;
    }
    else if(n1 == c){
        n2 = a;
        if(n2 > b) n2 = b;
        if(n2 > d) n2 = d;
    }
    else if(n1 == d){
        n2 = a;
        if(n2 > b) n2 = b;
        if(n2 > c) n2 = c;
    }

    // Encontra o maior
    n4 = a;
    if(n4 < b) n4 = b;
    if(n4 < c) n4 = c;
    if(n4 < d) n4 = d;

    // Encontra o segundo maior
    if(n4 == a){
        n3 = b;
        if(n3 < c) n3 = c;
        if(n3 < d) n3 = d;
    }
    else if(n4 == b){
        n3 = a;
        if(n3 < c) n3 = c;
        if(n3 < d) n3 = d;
    }
    else if(n4 == c){
        n3 = a;
        if(n3 < b) n3 = b;
        if(n3 < d) n3 = d;
    }
    else if(n4 == d){
        n3 = a;
        if(n3 < b) n3 = b;
        if(n3 < c) n3 = c;
    }

    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n2, n3, n4);

    return 0;
}