#include <stdio.h>

int main(){
    float a, b, c, d, determinante;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    determinante = a*d - b*c;

    printf("O VALOR DO DETERMINANTE E = %.2f", determinante);
    return 0;
}