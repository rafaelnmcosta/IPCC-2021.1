#include <stdio.h>

int main(){

    int horas;
    double v_total;

    scanf("%d", &horas);

    v_total = (horas/3)*10 + (horas%3)*5;

    printf("O VALOR A PAGAR E = %.2lf\n", v_total);

    return 0;
}