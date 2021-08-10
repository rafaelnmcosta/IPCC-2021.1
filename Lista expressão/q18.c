#include <stdio.h>

int main(){
    float a, b, c, d, e, f, x, y;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    y = (f*a - d*c)/(e*a - d*b);
    x = (c - b*y)/a;

    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x, y);

    return 0;
}