#include <stdio.h>

int main(){

    double a, b, c, aux1, aux2, aux3, perim, area;

    scanf("%lf %lf %lf", &a, &b, &c);

    aux1 = b-c;
    if(aux1<0) aux1 = c-b;

    aux2 = a-c;
    if(aux2<0) aux2 = c-a;

    aux3 = a-b;
    if(aux3<0) aux3 = b-a;

    if(aux1<a && a<(b+c) && aux2<b && b<(a+c) && aux3<c && c<(a+b)){
        //triangulo
        perim = a+b+c;
        printf("Perimetro = %.1lf\n", perim);
    }
    else{
        //trapezio
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}