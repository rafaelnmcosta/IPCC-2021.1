#include <stdio.h>

int main(){

    double n, i, iaux, k, s, cont;
    //Tabuada do numero n, começando em i, incrementando s, repetindo k vezes

    scanf("%lf %lf %lf %lf", &n, &i, &k, &s);

    iaux = i;
    cont=1;

    printf("Tabuada de soma:\n");
    while(cont<=k){
        printf("%.2lf + %.2lf = %.2lf\n", n, iaux, n+iaux);
        iaux+=s;
        cont++;
    }

    iaux=i;
    cont=1;

    printf("Tabuada de subtracao:\n");
    while(cont<=k){
        printf("%.2lf - %.2lf = %.2lf\n", n, iaux, n-iaux);
        iaux+=s;
        cont++;
    }

    iaux=i;
    cont=1;

    printf("Tabuada de multiplicacao:\n");
    while(cont<=k){
        printf("%.2lf x %.2lf = %.2lf\n", n, iaux, n*iaux);
        iaux+=s;
        cont++;
    }

    iaux=i;
    cont=1;

    printf("Tabuada de divisao:\n");
    while(cont<=k){
        printf("%.2lf / %.2lf = %.2lf\n", n, iaux, n/iaux);
        iaux+=s;
        cont++;
    }

    return 0;
}