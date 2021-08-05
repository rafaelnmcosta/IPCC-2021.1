#include <stdio.h>

int main(){
    float delta, A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    delta = B*B - 4*A*C;

    printf("O VALOR DE DELTA E = %.2f", delta);

    return 0;
}