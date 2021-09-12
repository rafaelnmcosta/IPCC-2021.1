#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");

        return 0;
    }
    if(delta==0){
        printf("RAIZ UNICA\n");

        delta = sqrt(delta);
        x1 = ((-1)*b + delta)/(2*a);

        printf("X1 = %.2lf", x1);

        return 0;
    }
    else{
        printf("RAIZES DISTINTAS\n");

        delta = sqrt(delta);
        x1 = ((-1)*b + delta)/(2*a);
        x2 = ((-1)*b - delta)/(2*a);
        
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);

        return 0;
    }
}