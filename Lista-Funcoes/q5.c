#include <stdio.h>
#include <math.h>

/**
 * @brief Função que calcula as raízes de uma equação do segundo grau através dos seus coeficientes
 * 
 * @param a primeiro coeficiente
 * @param b segundo coeficiente
 * @param c terceiro coeficiente
 * @param x1 ponteiro para a variável da primeira raiz
 * @param x2 ponteiro para a variável da segunda raiz
 * @return retorna 0 se forem raízes imaginárias, 1 se for uma raíz única (x1=x2), ou 2 se forem raízes distintas
 */
int raizesEq2Grau(double a, double b, double c, double *x1, double *x2);

int main(){

    double a, b, c, x1, x2;
    int verificador;

    scanf("%lf %lf %lf", &a, &b, &c);

    verificador = raizesEq2Grau(a, b, c, &x1, &x2);

    switch(verificador){
        case 0:
            printf("RAIZES IMAGINARIAS\n");
        break;

        case 1:
            printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
        break;

        case 2:
            if(x1<x2) printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
            else printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x2, x1);
        break;
    }

    return 0;
}

int raizesEq2Grau(double a, double b, double c, double *x1, double *x2){

    double delta;

    delta = b*b - 4*a*c;

    if(delta<0) return 0;

    delta = sqrt(delta);

    if(delta == 0){
        *x1 = (-b + delta)/(2*a);
        return 1;
    }
    else{
        *x1 = (-b + delta)/(2*a);
        *x2 = (-b - delta)/(2*a);
        return 2;
    }
}