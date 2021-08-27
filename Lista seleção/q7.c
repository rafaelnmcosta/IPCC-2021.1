#include <stdio.h>

int main(){
    double salario;

    scanf("%lf", &salario);

    if(salario<=300) salario *= 1.5;
    else salario *= 1.3;

    printf("SALARIO COM REAJUSTE = %.2lf", salario);

    return 0;
}