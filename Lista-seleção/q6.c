#include <stdio.h>

int main(){

    double nota;
    char conceito;

    scanf("%lf", &nota);

    if(nota>=0 && nota<6) conceito = 'D';
    else if(nota<7.5) conceito = 'C';
    else if(nota<9) conceito = 'B';
    else conceito = 'A';

    printf("NOTA = %.1lf CONCEITO = %c\n", nota, conceito);

    return 0;
}